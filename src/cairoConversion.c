#include "RGtk2/cairo.h"

USER_OBJECT_
asRCairoPath(cairo_path_t *path)
{
	static gchar *pathNames[] = { "status", "data", NULL };
	
	cairo_path_data_t *data;
	gint i, j;
	USER_OBJECT_ s_path, s_data;
	
	PROTECT(s_path = NEW_LIST(2));
	SET_VECTOR_ELT(s_path, 0, asREnum(path->status, CAIRO_TYPE_STATUS));
	
	for (i = 0, j = 0; i < path->num_data; i++, j++) {
		i += path->data[i].header.length;
	}
	
	s_data = NEW_LIST(j);
	SET_VECTOR_ELT(s_path, 1, s_data);
	
	for (i = 0, j = 0; i < path->num_data; i+= data->header.length, j++) {
		USER_OBJECT_ s_data_el = NULL_USER_OBJECT;
		data = &path->data[i];
		switch(data->header.type) {
		case CAIRO_PATH_MOVE_TO:
		case CAIRO_PATH_LINE_TO:
			PROTECT(s_data_el = NEW_INTEGER(2));
			INTEGER_DATA(s_data_el)[0] = data[1].point.x;
			INTEGER_DATA(s_data_el)[1] = data[1].point.y;
		break;
		case CAIRO_PATH_CURVE_TO:
			PROTECT(s_data_el = NEW_INTEGER(6));
			INTEGER_DATA(s_data_el)[0] = data[1].point.x;
			INTEGER_DATA(s_data_el)[1] = data[1].point.y;
			INTEGER_DATA(s_data_el)[2] = data[2].point.x;
			INTEGER_DATA(s_data_el)[3] = data[2].point.y;
			INTEGER_DATA(s_data_el)[4] = data[3].point.x;
			INTEGER_DATA(s_data_el)[5] = data[3].point.y;
		break;
		case CAIRO_PATH_CLOSE_PATH:
			PROTECT(s_data_el = NEW_INTEGER(0));
		break;
		default:
			PROBLEM "Converting Cairo path: did not understand type %d", data->header.type
			ERROR;
		}
		setAttrib(s_data_el, install("type"), asRInteger(data->header.type));
		UNPROTECT(1);
		SET_VECTOR_ELT(s_data, j, s_data_el);
	}
	
	SET_NAMES(s_path, asRStringArray(pathNames));
	
	UNPROTECT(1);
	
	return(s_path);
}

/** the cairo people say that we shouldn't do this - oh well */
cairo_path_t *
asCCairoPath(USER_OBJECT_ s_path)
{
	cairo_path_t *path;
	cairo_path_data_t *element;
	GSList *data = NULL, *cur;
	gint i,j;
	
	/* init path structure */
	path = (cairo_path_t*)R_alloc(1, sizeof(cairo_path_t));
	
	/* set status code */
	path->status = CAIRO_STATUS_SUCCESS;
	
	/* for each path element, create points according to type and store in list */
	for (i = 0; i < GET_LENGTH(s_path); i++) {
		USER_OBJECT_ s_element = VECTOR_ELT(s_path, i);
		int points = 0, len;
		cairo_path_data_type_t type = asCInteger(getAttrib(s_element, install("type")));
		/* how many points do we need for this type of element? */
		switch(type) {
			case CAIRO_PATH_MOVE_TO:
			case CAIRO_PATH_LINE_TO:
				points = 1;
			break;
			case CAIRO_PATH_CURVE_TO:
				points = 3;
			break;
			case CAIRO_PATH_CLOSE_PATH:
				points = 0;
			break;
			default:
				PROBLEM "Converting Cairo path: did not understand type %d", type
				ERROR;
		}
		len = points + 1; /* have to include header */
		element = (cairo_path_data_t*)R_alloc(len, sizeof(cairo_path_data_t));
		/* define header element */
		element[0].header.type = type;
		element[0].header.length = len;
		data = g_slist_append(data, &element[0]); /* add header to list */
		for (j = 1; j < len; j++) { /* define points */
			element[j].point.x = INTEGER_DATA(s_element)[2*j];
			element[j].point.y = INTEGER_DATA(s_element)[2*j+1];
			data = g_slist_append(data, &element[j]); /* add point to list */
		}
	}
	
	/* initialize the path's data array */
	path->num_data = g_slist_length(data);
	path->data = (cairo_path_data_t*)R_alloc(path->num_data, sizeof(cairo_path_data_t));
	
	/* copy list into array */
	cur = data;
	for(i = 0; i < path->num_data; i++) {
		path->data[i] = ((cairo_path_data_t*)cur->data)[0];
		cur = g_slist_next(cur);
	}

	return(path);	
}

cairo_glyph_t *
asCCairoGlyph(USER_OBJECT_ s_glyph)
{
	cairo_glyph_t *glyph = (cairo_glyph_t *)R_alloc(1, sizeof(cairo_glyph_t));
	
	glyph->index = asCNumeric(VECTOR_ELT(s_glyph, 0));
	glyph->x = asCNumeric(VECTOR_ELT(s_glyph, 1));
	glyph->y = asCNumeric(VECTOR_ELT(s_glyph, 2));
	
	return(glyph);
}
