#include <RGtk2/gobject.h>
#include "RGtk2/pango.h"

#include "pangoFuncs.h"


USER_OBJECT_
S_pango_color_get_type(void)
{

  GType ans;
  USER_OBJECT_ _result = NULL_USER_OBJECT;

  ans = pango_color_get_type();

  _result = asRGType(ans);

  return(_result);
}
 

USER_OBJECT_
S_pango_color_copy(USER_OBJECT_ s_object)
{
  PangoColor* object = ((PangoColor*)getPtrValue(s_object));

  PangoColor* ans;
  USER_OBJECT_ _result = NULL_USER_OBJECT;

  ans = pango_color_copy(object);

  _result = toRPointerWithFinalizer(ans ? pango_color_copy(ans) : NULL, "PangoColor", (RPointerFinalizer) pango_color_free);

  return(_result);
}
 

USER_OBJECT_
S_pango_color_free(USER_OBJECT_ s_object)
{
  PangoColor* object = ((PangoColor*)getPtrValue(s_object));

  USER_OBJECT_ _result = NULL_USER_OBJECT;

  pango_color_free(object);


  return(_result);
}
 

USER_OBJECT_
S_pango_color_parse(USER_OBJECT_ s_spec)
{
  const char* spec = ((const char*)asCString(s_spec));

  gboolean ans;
  USER_OBJECT_ _result = NULL_USER_OBJECT;
  PangoColor color;

  ans = pango_color_parse(&color, spec);

  _result = asRLogical(ans);

  _result = retByVal(_result, "color", toRPointerWithFinalizer(&color ? pango_color_copy(&color) : NULL, "PangoColor", (RPointerFinalizer) pango_color_free), NULL);

  return(_result);
}
 

USER_OBJECT_
S_pango_attr_type_register(USER_OBJECT_ s_name)
{
  const gchar* name = ((const gchar*)asCString(s_name));

  PangoAttrType ans;
  USER_OBJECT_ _result = NULL_USER_OBJECT;

  ans = pango_attr_type_register(name);

  _result = asREnum(ans, PANGO_TYPE_ATTR_TYPE);

  return(_result);
}
 

USER_OBJECT_
S_pango_attribute_copy(USER_OBJECT_ s_object)
{
  PangoAttribute* object = ((PangoAttribute*)getPtrValue(s_object));

  PangoAttribute* ans;
  USER_OBJECT_ _result = NULL_USER_OBJECT;

  ans = pango_attribute_copy(object);

  _result = asRPangoAttribute(ans);

  return(_result);
}
 

USER_OBJECT_
S_pango_attribute_destroy(USER_OBJECT_ s_object)
{
  PangoAttribute* object = ((PangoAttribute*)getPtrValue(s_object));

  USER_OBJECT_ _result = NULL_USER_OBJECT;

  pango_attribute_destroy(object);


  return(_result);
}
 

USER_OBJECT_
S_pango_attribute_equal(USER_OBJECT_ s_object, USER_OBJECT_ s_attr2)
{
  PangoAttribute* object = ((PangoAttribute*)getPtrValue(s_object));
  const PangoAttribute* attr2 = ((const PangoAttribute*)getPtrValue(s_attr2));

  gboolean ans;
  USER_OBJECT_ _result = NULL_USER_OBJECT;

  ans = pango_attribute_equal(object, attr2);

  _result = asRLogical(ans);

  return(_result);
}
 

USER_OBJECT_
S_pango_attr_language_new(USER_OBJECT_ s_language)
{
  PangoLanguage* language = ((PangoLanguage*)getPtrValue(s_language));

  PangoAttribute* ans;
  USER_OBJECT_ _result = NULL_USER_OBJECT;

  ans = pango_attr_language_new(language);

  _result = asRPangoAttribute(ans);

  return(_result);
}
 

USER_OBJECT_
S_pango_attr_family_new(USER_OBJECT_ s_family)
{
  const char* family = ((const char*)asCString(s_family));

  PangoAttribute* ans;
  USER_OBJECT_ _result = NULL_USER_OBJECT;

  ans = pango_attr_family_new(family);

  _result = asRPangoAttribute(ans);

  return(_result);
}
 

USER_OBJECT_
S_pango_attr_foreground_new(USER_OBJECT_ s_red, USER_OBJECT_ s_green, USER_OBJECT_ s_blue)
{
  guint16 red = ((guint16)asCInteger(s_red));
  guint16 green = ((guint16)asCInteger(s_green));
  guint16 blue = ((guint16)asCInteger(s_blue));

  PangoAttribute* ans;
  USER_OBJECT_ _result = NULL_USER_OBJECT;

  ans = pango_attr_foreground_new(red, green, blue);

  _result = asRPangoAttribute(ans);

  return(_result);
}
 

USER_OBJECT_
S_pango_attr_background_new(USER_OBJECT_ s_red, USER_OBJECT_ s_green, USER_OBJECT_ s_blue)
{
  guint16 red = ((guint16)asCInteger(s_red));
  guint16 green = ((guint16)asCInteger(s_green));
  guint16 blue = ((guint16)asCInteger(s_blue));

  PangoAttribute* ans;
  USER_OBJECT_ _result = NULL_USER_OBJECT;

  ans = pango_attr_background_new(red, green, blue);

  _result = asRPangoAttribute(ans);

  return(_result);
}
 

USER_OBJECT_
S_pango_attr_strikethrough_color_new(USER_OBJECT_ s_red, USER_OBJECT_ s_green, USER_OBJECT_ s_blue)
{
  guint16 red = ((guint16)asCInteger(s_red));
  guint16 green = ((guint16)asCInteger(s_green));
  guint16 blue = ((guint16)asCInteger(s_blue));

  PangoAttribute* ans;
  USER_OBJECT_ _result = NULL_USER_OBJECT;

  ans = pango_attr_strikethrough_color_new(red, green, blue);

  _result = asRPangoAttribute(ans);

  return(_result);
}
 

USER_OBJECT_
S_pango_attr_underline_color_new(USER_OBJECT_ s_red, USER_OBJECT_ s_green, USER_OBJECT_ s_blue)
{
  guint16 red = ((guint16)asCInteger(s_red));
  guint16 green = ((guint16)asCInteger(s_green));
  guint16 blue = ((guint16)asCInteger(s_blue));

  PangoAttribute* ans;
  USER_OBJECT_ _result = NULL_USER_OBJECT;

  ans = pango_attr_underline_color_new(red, green, blue);

  _result = asRPangoAttribute(ans);

  return(_result);
}
 

USER_OBJECT_
S_pango_attr_size_new(USER_OBJECT_ s_size)
{
  int size = ((int)asCInteger(s_size));

  PangoAttribute* ans;
  USER_OBJECT_ _result = NULL_USER_OBJECT;

  ans = pango_attr_size_new(size);

  _result = asRPangoAttribute(ans);

  return(_result);
}
 

USER_OBJECT_
S_pango_attr_size_new_absolute(USER_OBJECT_ s_size)
{
  int size = ((int)asCInteger(s_size));

  PangoAttribute* ans;
  USER_OBJECT_ _result = NULL_USER_OBJECT;

  ans = pango_attr_size_new_absolute(size);

  _result = asRPangoAttribute(ans);

  return(_result);
}
 

USER_OBJECT_
S_pango_attr_style_new(USER_OBJECT_ s_style)
{
  PangoStyle style = ((PangoStyle)asCEnum(s_style, PANGO_TYPE_STYLE));

  PangoAttribute* ans;
  USER_OBJECT_ _result = NULL_USER_OBJECT;

  ans = pango_attr_style_new(style);

  _result = asRPangoAttribute(ans);

  return(_result);
}
 

USER_OBJECT_
S_pango_attr_weight_new(USER_OBJECT_ s_weight)
{
  PangoWeight weight = ((PangoWeight)asCEnum(s_weight, PANGO_TYPE_WEIGHT));

  PangoAttribute* ans;
  USER_OBJECT_ _result = NULL_USER_OBJECT;

  ans = pango_attr_weight_new(weight);

  _result = asRPangoAttribute(ans);

  return(_result);
}
 

USER_OBJECT_
S_pango_attr_variant_new(USER_OBJECT_ s_variant)
{
  PangoVariant variant = ((PangoVariant)asCEnum(s_variant, PANGO_TYPE_VARIANT));

  PangoAttribute* ans;
  USER_OBJECT_ _result = NULL_USER_OBJECT;

  ans = pango_attr_variant_new(variant);

  _result = asRPangoAttribute(ans);

  return(_result);
}
 

USER_OBJECT_
S_pango_attr_stretch_new(USER_OBJECT_ s_stretch)
{
  PangoStretch stretch = ((PangoStretch)asCEnum(s_stretch, PANGO_TYPE_STRETCH));

  PangoAttribute* ans;
  USER_OBJECT_ _result = NULL_USER_OBJECT;

  ans = pango_attr_stretch_new(stretch);

  _result = asRPangoAttribute(ans);

  return(_result);
}
 

USER_OBJECT_
S_pango_attr_font_desc_new(USER_OBJECT_ s_desc)
{
  const PangoFontDescription* desc = ((const PangoFontDescription*)getPtrValue(s_desc));

  PangoAttribute* ans;
  USER_OBJECT_ _result = NULL_USER_OBJECT;

  ans = pango_attr_font_desc_new(desc);

  _result = asRPangoAttribute(ans);

  return(_result);
}
 

USER_OBJECT_
S_pango_attr_underline_new(USER_OBJECT_ s_underline)
{
  PangoUnderline underline = ((PangoUnderline)asCEnum(s_underline, PANGO_TYPE_UNDERLINE));

  PangoAttribute* ans;
  USER_OBJECT_ _result = NULL_USER_OBJECT;

  ans = pango_attr_underline_new(underline);

  _result = asRPangoAttribute(ans);

  return(_result);
}
 

USER_OBJECT_
S_pango_attr_strikethrough_new(USER_OBJECT_ s_strikethrough)
{
  gboolean strikethrough = ((gboolean)asCLogical(s_strikethrough));

  PangoAttribute* ans;
  USER_OBJECT_ _result = NULL_USER_OBJECT;

  ans = pango_attr_strikethrough_new(strikethrough);

  _result = asRPangoAttribute(ans);

  return(_result);
}
 

USER_OBJECT_
S_pango_attr_rise_new(USER_OBJECT_ s_rise)
{
  int rise = ((int)asCInteger(s_rise));

  PangoAttribute* ans;
  USER_OBJECT_ _result = NULL_USER_OBJECT;

  ans = pango_attr_rise_new(rise);

  _result = asRPangoAttribute(ans);

  return(_result);
}
 

USER_OBJECT_
S_pango_attr_shape_new(USER_OBJECT_ s_ink_rect, USER_OBJECT_ s_logical_rect)
{
  const PangoRectangle* ink_rect = asCPangoRectangle(s_ink_rect);
  const PangoRectangle* logical_rect = asCPangoRectangle(s_logical_rect);

  PangoAttribute* ans;
  USER_OBJECT_ _result = NULL_USER_OBJECT;

  ans = pango_attr_shape_new(ink_rect, logical_rect);

  _result = asRPangoAttribute(ans);

  return(_result);
}
 

USER_OBJECT_
S_pango_attr_shape_new_with_data(USER_OBJECT_ s_ink_rect, USER_OBJECT_ s_logical_rect, USER_OBJECT_ s_data)
{
  const PangoRectangle* ink_rect = asCPangoRectangle(s_ink_rect);
  const PangoRectangle* logical_rect = asCPangoRectangle(s_logical_rect);
  gpointer data = ((gpointer)asCGenericData(s_data));
  GDestroyNotify destroy_func = ((GDestroyNotify)R_ReleaseObject);

  PangoAttribute* ans;
  USER_OBJECT_ _result = NULL_USER_OBJECT;

  ans = pango_attr_shape_new_with_data(ink_rect, logical_rect, data, NULL, destroy_func);

  _result = asRPangoAttribute(ans);

  return(_result);
}
 

USER_OBJECT_
S_pango_attr_letter_spacing_new(USER_OBJECT_ s_letter_spacing)
{
  int letter_spacing = ((int)asCInteger(s_letter_spacing));

  PangoAttribute* ans;
  USER_OBJECT_ _result = NULL_USER_OBJECT;

  ans = pango_attr_letter_spacing_new(letter_spacing);

  _result = asRPangoAttribute(ans);

  return(_result);
}
 

USER_OBJECT_
S_pango_attr_scale_new(USER_OBJECT_ s_scale_factor)
{
  double scale_factor = ((double)asCNumeric(s_scale_factor));

  PangoAttribute* ans;
  USER_OBJECT_ _result = NULL_USER_OBJECT;

  ans = pango_attr_scale_new(scale_factor);

  _result = asRPangoAttribute(ans);

  return(_result);
}
 

USER_OBJECT_
S_pango_attr_fallback_new(USER_OBJECT_ s_fallback)
{
  gboolean fallback = ((gboolean)asCLogical(s_fallback));

  PangoAttribute* ans;
  USER_OBJECT_ _result = NULL_USER_OBJECT;

  ans = pango_attr_fallback_new(fallback);

  _result = asRPangoAttribute(ans);

  return(_result);
}
 

USER_OBJECT_
S_pango_attr_list_get_type(void)
{

  GType ans;
  USER_OBJECT_ _result = NULL_USER_OBJECT;

  ans = pango_attr_list_get_type();

  _result = asRGType(ans);

  return(_result);
}
 

USER_OBJECT_
S_pango_attr_list_new(void)
{

  PangoAttrList* ans;
  USER_OBJECT_ _result = NULL_USER_OBJECT;

  ans = pango_attr_list_new();

  _result = toRPointerWithFinalizer(ans ? pango_attr_list_ref(ans) : NULL, "PangoAttrList", (RPointerFinalizer) pango_attr_list_unref);

  return(_result);
}
 

USER_OBJECT_
S_pango_attr_list_ref(USER_OBJECT_ s_object)
{
  PangoAttrList* object = ((PangoAttrList*)getPtrValue(s_object));

  USER_OBJECT_ _result = NULL_USER_OBJECT;

  pango_attr_list_ref(object);


  return(_result);
}
 

USER_OBJECT_
S_pango_attr_list_unref(USER_OBJECT_ s_object)
{
  PangoAttrList* object = ((PangoAttrList*)getPtrValue(s_object));

  USER_OBJECT_ _result = NULL_USER_OBJECT;

  pango_attr_list_unref(object);


  return(_result);
}
 

USER_OBJECT_
S_pango_attr_list_copy(USER_OBJECT_ s_object)
{
  PangoAttrList* object = ((PangoAttrList*)getPtrValue(s_object));

  PangoAttrList* ans;
  USER_OBJECT_ _result = NULL_USER_OBJECT;

  ans = pango_attr_list_copy(object);

  _result = toRPointerWithFinalizer(ans ? pango_attr_list_ref(ans) : NULL, "PangoAttrList", (RPointerFinalizer) pango_attr_list_unref);

  return(_result);
}
 

USER_OBJECT_
S_pango_attr_list_insert(USER_OBJECT_ s_object, USER_OBJECT_ s_attr)
{
  PangoAttrList* object = ((PangoAttrList*)getPtrValue(s_object));
  PangoAttribute* attr = ((PangoAttribute*)getPtrValue(s_attr));

  USER_OBJECT_ _result = NULL_USER_OBJECT;

  pango_attr_list_insert(object, attr);


  return(_result);
}
 

USER_OBJECT_
S_pango_attr_list_insert_before(USER_OBJECT_ s_object, USER_OBJECT_ s_attr)
{
  PangoAttrList* object = ((PangoAttrList*)getPtrValue(s_object));
  PangoAttribute* attr = ((PangoAttribute*)getPtrValue(s_attr));

  USER_OBJECT_ _result = NULL_USER_OBJECT;

  pango_attr_list_insert_before(object, attr);


  return(_result);
}
 

USER_OBJECT_
S_pango_attr_list_change(USER_OBJECT_ s_object, USER_OBJECT_ s_attr)
{
  PangoAttrList* object = ((PangoAttrList*)getPtrValue(s_object));
  PangoAttribute* attr = ((PangoAttribute*)getPtrValue(s_attr));

  USER_OBJECT_ _result = NULL_USER_OBJECT;

  pango_attr_list_change(object, attr);


  return(_result);
}
 

USER_OBJECT_
S_pango_attr_list_splice(USER_OBJECT_ s_object, USER_OBJECT_ s_other, USER_OBJECT_ s_pos, USER_OBJECT_ s_len)
{
  PangoAttrList* object = ((PangoAttrList*)getPtrValue(s_object));
  PangoAttrList* other = ((PangoAttrList*)getPtrValue(s_other));
  gint pos = ((gint)asCInteger(s_pos));
  gint len = ((gint)asCInteger(s_len));

  USER_OBJECT_ _result = NULL_USER_OBJECT;

  pango_attr_list_splice(object, other, pos, len);


  return(_result);
}
 

USER_OBJECT_
S_pango_attr_list_get_iterator(USER_OBJECT_ s_object)
{
  PangoAttrList* object = ((PangoAttrList*)getPtrValue(s_object));

  PangoAttrIterator* ans;
  USER_OBJECT_ _result = NULL_USER_OBJECT;

  ans = pango_attr_list_get_iterator(object);

  _result = toRPointerWithFinalizer(ans, "PangoAttrIterator", (RPointerFinalizer) pango_attr_iterator_destroy);

  return(_result);
}
 

USER_OBJECT_
S_pango_attr_list_filter(USER_OBJECT_ s_object, USER_OBJECT_ s_func, USER_OBJECT_ s_data)
{
  PangoAttrFilterFunc func = ((PangoAttrFilterFunc)S_PangoAttrFilterFunc);
  R_CallbackData* data = R_createCBData(s_func, s_data);
  PangoAttrList* object = ((PangoAttrList*)getPtrValue(s_object));

  PangoAttrList* ans;
  USER_OBJECT_ _result = NULL_USER_OBJECT;

  ans = pango_attr_list_filter(object, func, data);

  _result = toRPointerWithFinalizer(ans ? pango_attr_list_ref(ans) : NULL, "PangoAttrList", (RPointerFinalizer) pango_attr_list_unref);
  R_freeCBData(data);

  return(_result);
}
 

USER_OBJECT_
S_pango_attr_iterator_range(USER_OBJECT_ s_object)
{
  PangoAttrIterator* object = ((PangoAttrIterator*)getPtrValue(s_object));

  USER_OBJECT_ _result = NULL_USER_OBJECT;
  gint start;
  gint end;

  pango_attr_iterator_range(object, &start, &end);


  _result = retByVal(_result, "start", asRInteger(start), "end", asRInteger(end), NULL);

  return(_result);
}
 

USER_OBJECT_
S_pango_attr_iterator_next(USER_OBJECT_ s_object)
{
  PangoAttrIterator* object = ((PangoAttrIterator*)getPtrValue(s_object));

  gboolean ans;
  USER_OBJECT_ _result = NULL_USER_OBJECT;

  ans = pango_attr_iterator_next(object);

  _result = asRLogical(ans);

  return(_result);
}
 

USER_OBJECT_
S_pango_attr_iterator_copy(USER_OBJECT_ s_object)
{
  PangoAttrIterator* object = ((PangoAttrIterator*)getPtrValue(s_object));

  PangoAttrIterator* ans;
  USER_OBJECT_ _result = NULL_USER_OBJECT;

  ans = pango_attr_iterator_copy(object);

  _result = toRPointerWithFinalizer(ans, "PangoAttrIterator", (RPointerFinalizer) pango_attr_iterator_destroy);

  return(_result);
}
 

USER_OBJECT_
S_pango_attr_iterator_destroy(USER_OBJECT_ s_object)
{
  PangoAttrIterator* object = ((PangoAttrIterator*)getPtrValue(s_object));

  USER_OBJECT_ _result = NULL_USER_OBJECT;

  pango_attr_iterator_destroy(object);


  return(_result);
}
 

USER_OBJECT_
S_pango_attr_iterator_get(USER_OBJECT_ s_object, USER_OBJECT_ s_type)
{
  PangoAttrIterator* object = ((PangoAttrIterator*)getPtrValue(s_object));
  PangoAttrType type = ((PangoAttrType)asCEnum(s_type, PANGO_TYPE_ATTR_TYPE));

  PangoAttribute* ans;
  USER_OBJECT_ _result = NULL_USER_OBJECT;

  ans = pango_attr_iterator_get(object, type);

  _result = asRPangoAttributeCopy(ans);

  return(_result);
}
 

USER_OBJECT_
S_pango_attr_iterator_get_attrs(USER_OBJECT_ s_object)
{
  PangoAttrIterator* object = ((PangoAttrIterator*)getPtrValue(s_object));

  GSList* ans;
  USER_OBJECT_ _result = NULL_USER_OBJECT;

  ans = pango_attr_iterator_get_attrs(object);

  _result = asRGSListConv(ans, ((ElementConverter)asRPangoAttributeCopy));
  CLEANUP(g_slist_free, ans);

  return(_result);
}
 

USER_OBJECT_
S_pango_parse_markup(USER_OBJECT_ s_markup_text, USER_OBJECT_ s_length, USER_OBJECT_ s_accel_marker)
{
  const char* markup_text = ((const char*)asCString(s_markup_text));
  int length = ((int)asCInteger(s_length));
  gunichar accel_marker = ((gunichar)asCNumeric(s_accel_marker));

  gboolean ans;
  USER_OBJECT_ _result = NULL_USER_OBJECT;
  PangoAttrList* attr_list = NULL;
  char* text = NULL;
  gunichar accel_char;
  GError* error = NULL;

  ans = pango_parse_markup(markup_text, length, accel_marker, &attr_list, &text, &accel_char, &error);

  _result = asRLogical(ans);

  _result = retByVal(_result, "attr.list", toRPointerWithFinalizer(attr_list ? pango_attr_list_ref(attr_list) : NULL, "PangoAttrList", (RPointerFinalizer) pango_attr_list_unref), "text", asRString(text), "accel.char", asRNumeric(accel_char), "error", asRGError(error), NULL);
  CLEANUP(g_error_free, error);

  return(_result);
}
 

USER_OBJECT_
S_pango_find_paragraph_boundary(USER_OBJECT_ s_text, USER_OBJECT_ s_length)
{
  const gchar* text = ((const gchar*)asCString(s_text));
  gint length = ((gint)asCInteger(s_length));

  USER_OBJECT_ _result = NULL_USER_OBJECT;
  gint paragraph_delimiter_index;
  gint next_paragraph_start;

  pango_find_paragraph_boundary(text, length, &paragraph_delimiter_index, &next_paragraph_start);


  _result = retByVal(_result, "paragraph.delimiter.index", asRInteger(paragraph_delimiter_index), "next.paragraph.start", asRInteger(next_paragraph_start), NULL);

  return(_result);
}
 

USER_OBJECT_
S_pango_cairo_font_map_get_type(void)
{

  GType ans;
  USER_OBJECT_ _result = NULL_USER_OBJECT;

  ans = pango_cairo_font_map_get_type();

  _result = asRGType(ans);

  return(_result);
}
 

USER_OBJECT_
S_pango_cairo_font_map_new(void)
{

  PangoFontMap* ans;
  USER_OBJECT_ _result = NULL_USER_OBJECT;

  ans = pango_cairo_font_map_new();

  _result = toRPointerWithFinalizer(ans, "PangoFontMap", (RPointerFinalizer) g_object_unref);

  return(_result);
}
 

USER_OBJECT_
S_pango_cairo_font_map_get_default(void)
{

  PangoFontMap* ans;
  USER_OBJECT_ _result = NULL_USER_OBJECT;

  ans = pango_cairo_font_map_get_default();

  _result = toRPointerWithRef(ans, "PangoFontMap");

  return(_result);
}
 

USER_OBJECT_
S_pango_cairo_font_map_set_resolution(USER_OBJECT_ s_object, USER_OBJECT_ s_dpi)
{
  PangoCairoFontMap* object = PANGO_CAIRO_FONT_MAP(getPtrValue(s_object));
  double dpi = ((double)asCNumeric(s_dpi));

  USER_OBJECT_ _result = NULL_USER_OBJECT;

  pango_cairo_font_map_set_resolution(object, dpi);


  return(_result);
}
 

USER_OBJECT_
S_pango_cairo_font_map_get_resolution(USER_OBJECT_ s_object)
{
  PangoCairoFontMap* object = PANGO_CAIRO_FONT_MAP(getPtrValue(s_object));

  double ans;
  USER_OBJECT_ _result = NULL_USER_OBJECT;

  ans = pango_cairo_font_map_get_resolution(object);

  _result = asRNumeric(ans);

  return(_result);
}
 

USER_OBJECT_
S_pango_cairo_font_map_create_context(USER_OBJECT_ s_object)
{
  PangoCairoFontMap* object = PANGO_CAIRO_FONT_MAP(getPtrValue(s_object));

  PangoContext* ans;
  USER_OBJECT_ _result = NULL_USER_OBJECT;

  ans = pango_cairo_font_map_create_context(object);

  _result = toRPointerWithRef(ans, "PangoContext");

  return(_result);
}
 

USER_OBJECT_
S_pango_cairo_update_context(USER_OBJECT_ s_cr, USER_OBJECT_ s_context)
{
  cairo_t* cr = ((cairo_t*)getPtrValue(s_cr));
  PangoContext* context = PANGO_CONTEXT(getPtrValue(s_context));

  USER_OBJECT_ _result = NULL_USER_OBJECT;

  pango_cairo_update_context(cr, context);


  return(_result);
}
 

USER_OBJECT_
S_pango_cairo_context_set_font_options(USER_OBJECT_ s_context, USER_OBJECT_ s_options)
{
  PangoContext* context = PANGO_CONTEXT(getPtrValue(s_context));
  const cairo_font_options_t* options = ((const cairo_font_options_t*)getPtrValue(s_options));

  USER_OBJECT_ _result = NULL_USER_OBJECT;

  pango_cairo_context_set_font_options(context, options);


  return(_result);
}
 

USER_OBJECT_
S_pango_cairo_context_get_font_options(USER_OBJECT_ s_context)
{
  PangoContext* context = PANGO_CONTEXT(getPtrValue(s_context));

  const cairo_font_options_t* ans;
  USER_OBJECT_ _result = NULL_USER_OBJECT;

  ans = pango_cairo_context_get_font_options(context);

  _result = toRPointer(ans, "CairoFontOptions");

  return(_result);
}
 

USER_OBJECT_
S_pango_cairo_context_set_resolution(USER_OBJECT_ s_context, USER_OBJECT_ s_dpi)
{
  PangoContext* context = PANGO_CONTEXT(getPtrValue(s_context));
  double dpi = ((double)asCNumeric(s_dpi));

  USER_OBJECT_ _result = NULL_USER_OBJECT;

  pango_cairo_context_set_resolution(context, dpi);


  return(_result);
}
 

USER_OBJECT_
S_pango_cairo_context_get_resolution(USER_OBJECT_ s_context)
{
  PangoContext* context = PANGO_CONTEXT(getPtrValue(s_context));

  double ans;
  USER_OBJECT_ _result = NULL_USER_OBJECT;

  ans = pango_cairo_context_get_resolution(context);

  _result = asRNumeric(ans);

  return(_result);
}
 

USER_OBJECT_
S_pango_cairo_create_layout(USER_OBJECT_ s_cr)
{
  cairo_t* cr = ((cairo_t*)getPtrValue(s_cr));

  PangoLayout* ans;
  USER_OBJECT_ _result = NULL_USER_OBJECT;

  ans = pango_cairo_create_layout(cr);

  _result = toRPointerWithRef(ans, "PangoLayout");

  return(_result);
}
 

USER_OBJECT_
S_pango_cairo_update_layout(USER_OBJECT_ s_cr, USER_OBJECT_ s_layout)
{
  cairo_t* cr = ((cairo_t*)getPtrValue(s_cr));
  PangoLayout* layout = PANGO_LAYOUT(getPtrValue(s_layout));

  USER_OBJECT_ _result = NULL_USER_OBJECT;

  pango_cairo_update_layout(cr, layout);


  return(_result);
}
 

USER_OBJECT_
S_pango_cairo_show_glyph_string(USER_OBJECT_ s_cr, USER_OBJECT_ s_font, USER_OBJECT_ s_glyphs)
{
  cairo_t* cr = ((cairo_t*)getPtrValue(s_cr));
  PangoFont* font = PANGO_FONT(getPtrValue(s_font));
  PangoGlyphString* glyphs = ((PangoGlyphString*)getPtrValue(s_glyphs));

  USER_OBJECT_ _result = NULL_USER_OBJECT;

  pango_cairo_show_glyph_string(cr, font, glyphs);


  return(_result);
}
 

USER_OBJECT_
S_pango_cairo_show_layout_line(USER_OBJECT_ s_cr, USER_OBJECT_ s_line)
{
  cairo_t* cr = ((cairo_t*)getPtrValue(s_cr));
  PangoLayoutLine* line = ((PangoLayoutLine*)getPtrValue(s_line));

  USER_OBJECT_ _result = NULL_USER_OBJECT;

  pango_cairo_show_layout_line(cr, line);


  return(_result);
}
 

USER_OBJECT_
S_pango_cairo_show_layout(USER_OBJECT_ s_cr, USER_OBJECT_ s_layout)
{
  cairo_t* cr = ((cairo_t*)getPtrValue(s_cr));
  PangoLayout* layout = PANGO_LAYOUT(getPtrValue(s_layout));

  USER_OBJECT_ _result = NULL_USER_OBJECT;

  pango_cairo_show_layout(cr, layout);


  return(_result);
}
 

USER_OBJECT_
S_pango_cairo_glyph_string_path(USER_OBJECT_ s_cr, USER_OBJECT_ s_font, USER_OBJECT_ s_glyphs)
{
  cairo_t* cr = ((cairo_t*)getPtrValue(s_cr));
  PangoFont* font = PANGO_FONT(getPtrValue(s_font));
  PangoGlyphString* glyphs = ((PangoGlyphString*)getPtrValue(s_glyphs));

  USER_OBJECT_ _result = NULL_USER_OBJECT;

  pango_cairo_glyph_string_path(cr, font, glyphs);


  return(_result);
}
 

USER_OBJECT_
S_pango_cairo_layout_line_path(USER_OBJECT_ s_cr, USER_OBJECT_ s_line)
{
  cairo_t* cr = ((cairo_t*)getPtrValue(s_cr));
  PangoLayoutLine* line = ((PangoLayoutLine*)getPtrValue(s_line));

  USER_OBJECT_ _result = NULL_USER_OBJECT;

  pango_cairo_layout_line_path(cr, line);


  return(_result);
}
 

USER_OBJECT_
S_pango_cairo_layout_path(USER_OBJECT_ s_cr, USER_OBJECT_ s_layout)
{
  cairo_t* cr = ((cairo_t*)getPtrValue(s_cr));
  PangoLayout* layout = PANGO_LAYOUT(getPtrValue(s_layout));

  USER_OBJECT_ _result = NULL_USER_OBJECT;

  pango_cairo_layout_path(cr, layout);


  return(_result);
}
 

USER_OBJECT_
S_pango_context_set_font_map(USER_OBJECT_ s_object, USER_OBJECT_ s_font_map)
{
  PangoContext* object = PANGO_CONTEXT(getPtrValue(s_object));
  PangoFontMap* font_map = PANGO_FONT_MAP(getPtrValue(s_font_map));

  USER_OBJECT_ _result = NULL_USER_OBJECT;

  pango_context_set_font_map(object, font_map);


  return(_result);
}
 

USER_OBJECT_
S_pango_context_get_font_map(USER_OBJECT_ s_object)
{
  PangoContext* object = PANGO_CONTEXT(getPtrValue(s_object));

  PangoFontMap* ans;
  USER_OBJECT_ _result = NULL_USER_OBJECT;

  ans = pango_context_get_font_map(object);

  _result = toRPointerWithRef(ans, "PangoFontMap");

  return(_result);
}
 

USER_OBJECT_
S_pango_context_list_families(USER_OBJECT_ s_object)
{
  PangoContext* object = PANGO_CONTEXT(getPtrValue(s_object));

  USER_OBJECT_ _result = NULL_USER_OBJECT;
  PangoFontFamily** families = NULL;
  int n_families;

  pango_context_list_families(object, &families, &n_families);


  _result = retByVal(_result, "families", toRPointerWithRefArrayWithSize(families, "PangoFontFamily", n_families), "n.families", asRInteger(n_families), NULL);
  CLEANUP(g_free, families);

  return(_result);
}
 

USER_OBJECT_
S_pango_get_mirror_char(USER_OBJECT_ s_ch)
{
  gunichar ch = ((gunichar)asCNumeric(s_ch));

  gboolean ans;
  USER_OBJECT_ _result = NULL_USER_OBJECT;
  gunichar mirrored_ch;

  ans = pango_get_mirror_char(ch, &mirrored_ch);

  _result = asRLogical(ans);

  _result = retByVal(_result, "mirrored.ch", asRNumeric(mirrored_ch), NULL);

  return(_result);
}
 

USER_OBJECT_
S_pango_unichar_direction(USER_OBJECT_ s_ch)
{
  gunichar ch = ((gunichar)asCNumeric(s_ch));

  PangoDirection ans;
  USER_OBJECT_ _result = NULL_USER_OBJECT;

  ans = pango_unichar_direction(ch);

  _result = asREnum(ans, PANGO_TYPE_DIRECTION);

  return(_result);
}
 

USER_OBJECT_
S_pango_find_base_dir(USER_OBJECT_ s_text, USER_OBJECT_ s_length)
{
  const gchar* text = ((const gchar*)asCString(s_text));
  gint length = ((gint)asCInteger(s_length));

  PangoDirection ans;
  USER_OBJECT_ _result = NULL_USER_OBJECT;

  ans = pango_find_base_dir(text, length);

  _result = asREnum(ans, PANGO_TYPE_DIRECTION);

  return(_result);
}
 

USER_OBJECT_
S_pango_context_load_font(USER_OBJECT_ s_object, USER_OBJECT_ s_desc)
{
  PangoContext* object = PANGO_CONTEXT(getPtrValue(s_object));
  const PangoFontDescription* desc = ((const PangoFontDescription*)getPtrValue(s_desc));

  PangoFont* ans;
  USER_OBJECT_ _result = NULL_USER_OBJECT;

  ans = pango_context_load_font(object, desc);

  _result = toRPointerWithRef(ans, "PangoFont");

  return(_result);
}
 

USER_OBJECT_
S_pango_context_load_fontset(USER_OBJECT_ s_object, USER_OBJECT_ s_desc, USER_OBJECT_ s_language)
{
  PangoContext* object = PANGO_CONTEXT(getPtrValue(s_object));
  const PangoFontDescription* desc = ((const PangoFontDescription*)getPtrValue(s_desc));
  PangoLanguage* language = ((PangoLanguage*)getPtrValue(s_language));

  PangoFontset* ans;
  USER_OBJECT_ _result = NULL_USER_OBJECT;

  ans = pango_context_load_fontset(object, desc, language);

  _result = toRPointerWithRef(ans, "PangoFontset");

  return(_result);
}
 

USER_OBJECT_
S_pango_context_set_matrix(USER_OBJECT_ s_object, USER_OBJECT_ s_matrix)
{
  PangoContext* object = PANGO_CONTEXT(getPtrValue(s_object));
  const PangoMatrix* matrix = ((const PangoMatrix*)getPtrValue(s_matrix));

  USER_OBJECT_ _result = NULL_USER_OBJECT;

  pango_context_set_matrix(object, matrix);


  return(_result);
}
 

USER_OBJECT_
S_pango_context_get_matrix(USER_OBJECT_ s_object)
{
  PangoContext* object = PANGO_CONTEXT(getPtrValue(s_object));

  const PangoMatrix* ans;
  USER_OBJECT_ _result = NULL_USER_OBJECT;

  ans = pango_context_get_matrix(object);

  _result = toRPointer(ans ? pango_matrix_copy(ans) : NULL, "PangoMatrix");

  return(_result);
}
 

USER_OBJECT_
S_pango_context_get_metrics(USER_OBJECT_ s_object, USER_OBJECT_ s_desc, USER_OBJECT_ s_language)
{
  PangoContext* object = PANGO_CONTEXT(getPtrValue(s_object));
  const PangoFontDescription* desc = ((const PangoFontDescription*)getPtrValue(s_desc));
  PangoLanguage* language = GET_LENGTH(s_language) == 0 ? NULL : ((PangoLanguage*)getPtrValue(s_language));

  PangoFontMetrics* ans;
  USER_OBJECT_ _result = NULL_USER_OBJECT;

  ans = pango_context_get_metrics(object, desc, language);

  _result = toRPointerWithFinalizer(ans ? pango_font_metrics_ref(ans) : NULL, "PangoFontMetrics", (RPointerFinalizer) pango_font_metrics_unref);

  return(_result);
}
 

USER_OBJECT_
S_pango_context_set_font_description(USER_OBJECT_ s_object, USER_OBJECT_ s_desc)
{
  PangoContext* object = PANGO_CONTEXT(getPtrValue(s_object));
  const PangoFontDescription* desc = ((const PangoFontDescription*)getPtrValue(s_desc));

  USER_OBJECT_ _result = NULL_USER_OBJECT;

  pango_context_set_font_description(object, desc);


  return(_result);
}
 

USER_OBJECT_
S_pango_context_get_font_description(USER_OBJECT_ s_object)
{
  PangoContext* object = PANGO_CONTEXT(getPtrValue(s_object));

  PangoFontDescription* ans;
  USER_OBJECT_ _result = NULL_USER_OBJECT;

  ans = pango_context_get_font_description(object);

  _result = toRPointerWithFinalizer(ans ? pango_font_description_copy(ans) : NULL, "PangoFontDescription", (RPointerFinalizer) pango_font_description_free);

  return(_result);
}
 

USER_OBJECT_
S_pango_context_get_language(USER_OBJECT_ s_object)
{
  PangoContext* object = PANGO_CONTEXT(getPtrValue(s_object));

  PangoLanguage* ans;
  USER_OBJECT_ _result = NULL_USER_OBJECT;

  ans = pango_context_get_language(object);

  _result = toRPointer(ans ? (ans) : NULL, "PangoLanguage");

  return(_result);
}
 

USER_OBJECT_
S_pango_context_set_language(USER_OBJECT_ s_object, USER_OBJECT_ s_language)
{
  PangoContext* object = PANGO_CONTEXT(getPtrValue(s_object));
  PangoLanguage* language = ((PangoLanguage*)getPtrValue(s_language));

  USER_OBJECT_ _result = NULL_USER_OBJECT;

  pango_context_set_language(object, language);


  return(_result);
}
 

USER_OBJECT_
S_pango_context_set_base_dir(USER_OBJECT_ s_object, USER_OBJECT_ s_direction)
{
  PangoContext* object = PANGO_CONTEXT(getPtrValue(s_object));
  PangoDirection direction = ((PangoDirection)asCEnum(s_direction, PANGO_TYPE_DIRECTION));

  USER_OBJECT_ _result = NULL_USER_OBJECT;

  pango_context_set_base_dir(object, direction);


  return(_result);
}
 

USER_OBJECT_
S_pango_context_get_base_dir(USER_OBJECT_ s_object)
{
  PangoContext* object = PANGO_CONTEXT(getPtrValue(s_object));

  PangoDirection ans;
  USER_OBJECT_ _result = NULL_USER_OBJECT;

  ans = pango_context_get_base_dir(object);

  _result = asREnum(ans, PANGO_TYPE_DIRECTION);

  return(_result);
}
 

USER_OBJECT_
S_pango_itemize(USER_OBJECT_ s_context, USER_OBJECT_ s_text, USER_OBJECT_ s_start_index, USER_OBJECT_ s_length, USER_OBJECT_ s_attrs, USER_OBJECT_ s_cached_iter)
{
  PangoContext* context = PANGO_CONTEXT(getPtrValue(s_context));
  const char* text = ((const char*)asCString(s_text));
  int start_index = ((int)asCInteger(s_start_index));
  int length = ((int)asCInteger(s_length));
  PangoAttrList* attrs = ((PangoAttrList*)getPtrValue(s_attrs));
  PangoAttrIterator* cached_iter = GET_LENGTH(s_cached_iter) == 0 ? NULL : ((PangoAttrIterator*)getPtrValue(s_cached_iter));

  GList* ans;
  USER_OBJECT_ _result = NULL_USER_OBJECT;

  ans = pango_itemize(context, text, start_index, length, attrs, cached_iter);

  _result = asRGListWithFinalizer(ans, "PangoItem", (RPointerFinalizer) pango_item_free);
  CLEANUP(g_list_free, ans);

  return(_result);
}
 

USER_OBJECT_
S_pango_itemize_with_base_dir(USER_OBJECT_ s_context, USER_OBJECT_ s_base_dir, USER_OBJECT_ s_text, USER_OBJECT_ s_start_index, USER_OBJECT_ s_length, USER_OBJECT_ s_attrs, USER_OBJECT_ s_cached_iter)
{
  PangoContext* context = PANGO_CONTEXT(getPtrValue(s_context));
  PangoDirection base_dir = ((PangoDirection)asCEnum(s_base_dir, PANGO_TYPE_DIRECTION));
  const char* text = ((const char*)asCString(s_text));
  int start_index = ((int)asCInteger(s_start_index));
  int length = ((int)asCInteger(s_length));
  PangoAttrList* attrs = ((PangoAttrList*)getPtrValue(s_attrs));
  PangoAttrIterator* cached_iter = GET_LENGTH(s_cached_iter) == 0 ? NULL : ((PangoAttrIterator*)getPtrValue(s_cached_iter));

  GList* ans;
  USER_OBJECT_ _result = NULL_USER_OBJECT;

  ans = pango_itemize_with_base_dir(context, base_dir, text, start_index, length, attrs, cached_iter);

  _result = asRGListWithFinalizer(ans, "PangoItem", (RPointerFinalizer) pango_item_free);
  CLEANUP(g_list_free, ans);

  return(_result);
}
 

USER_OBJECT_
S_pango_coverage_new(void)
{

  PangoCoverage* ans;
  USER_OBJECT_ _result = NULL_USER_OBJECT;

  ans = pango_coverage_new();

  _result = toRPointerWithFinalizer(ans, "PangoCoverage", (RPointerFinalizer) pango_coverage_unref);

  return(_result);
}
 

USER_OBJECT_
S_pango_coverage_ref(USER_OBJECT_ s_object)
{
  PangoCoverage* object = ((PangoCoverage*)getPtrValue(s_object));

  PangoCoverage* ans;
  USER_OBJECT_ _result = NULL_USER_OBJECT;

  ans = pango_coverage_ref(object);

  _result = toRPointerWithFinalizer(ans, "PangoCoverage", (RPointerFinalizer) pango_coverage_unref);

  return(_result);
}
 

USER_OBJECT_
S_pango_coverage_unref(USER_OBJECT_ s_object)
{
  PangoCoverage* object = ((PangoCoverage*)getPtrValue(s_object));

  USER_OBJECT_ _result = NULL_USER_OBJECT;

  pango_coverage_unref(object);


  return(_result);
}
 

USER_OBJECT_
S_pango_coverage_copy(USER_OBJECT_ s_object)
{
  PangoCoverage* object = ((PangoCoverage*)getPtrValue(s_object));

  PangoCoverage* ans;
  USER_OBJECT_ _result = NULL_USER_OBJECT;

  ans = pango_coverage_copy(object);

  _result = toRPointerWithFinalizer(ans, "PangoCoverage", (RPointerFinalizer) pango_coverage_unref);

  return(_result);
}
 

USER_OBJECT_
S_pango_coverage_get(USER_OBJECT_ s_object, USER_OBJECT_ s_index)
{
  PangoCoverage* object = ((PangoCoverage*)getPtrValue(s_object));
  int index = ((int)asCInteger(s_index));

  PangoCoverageLevel ans;
  USER_OBJECT_ _result = NULL_USER_OBJECT;

  ans = pango_coverage_get(object, index);

  _result = asREnum(ans, PANGO_TYPE_COVERAGE_LEVEL);

  return(_result);
}
 

USER_OBJECT_
S_pango_coverage_set(USER_OBJECT_ s_object, USER_OBJECT_ s_index, USER_OBJECT_ s_level)
{
  PangoCoverage* object = ((PangoCoverage*)getPtrValue(s_object));
  int index = ((int)asCInteger(s_index));
  PangoCoverageLevel level = ((PangoCoverageLevel)asCEnum(s_level, PANGO_TYPE_COVERAGE_LEVEL));

  USER_OBJECT_ _result = NULL_USER_OBJECT;

  pango_coverage_set(object, index, level);


  return(_result);
}
 

USER_OBJECT_
S_pango_coverage_max(USER_OBJECT_ s_object, USER_OBJECT_ s_other)
{
  PangoCoverage* object = ((PangoCoverage*)getPtrValue(s_object));
  PangoCoverage* other = ((PangoCoverage*)getPtrValue(s_other));

  USER_OBJECT_ _result = NULL_USER_OBJECT;

  pango_coverage_max(object, other);


  return(_result);
}
 

USER_OBJECT_
S_pango_coverage_to_bytes(USER_OBJECT_ s_object)
{
  PangoCoverage* object = ((PangoCoverage*)getPtrValue(s_object));

  USER_OBJECT_ _result = NULL_USER_OBJECT;
  guchar* bytes = NULL;
  int n_bytes;

  pango_coverage_to_bytes(object, &bytes, &n_bytes);


  _result = retByVal(_result, "bytes", asRRawArrayWithSize(bytes, n_bytes), "n.bytes", asRInteger(n_bytes), NULL);
  CLEANUP(g_free, bytes);

  return(_result);
}
 

USER_OBJECT_
S_pango_coverage_from_bytes(USER_OBJECT_ s_bytes)
{
  guchar* bytes = ((guchar*)asCArray(s_bytes, guchar, asCRaw));
  int n_bytes = ((int)GET_LENGTH(s_bytes));

  PangoCoverage* ans;
  USER_OBJECT_ _result = NULL_USER_OBJECT;

  ans = pango_coverage_from_bytes(bytes, n_bytes);

  _result = toRPointerWithFinalizer(ans, "PangoCoverage", (RPointerFinalizer) pango_coverage_unref);

  return(_result);
}
 

USER_OBJECT_
S_pango_font_description_new(void)
{

  PangoFontDescription* ans;
  USER_OBJECT_ _result = NULL_USER_OBJECT;

  ans = pango_font_description_new();

  _result = toRPointerWithFinalizer(ans ? pango_font_description_copy(ans) : NULL, "PangoFontDescription", (RPointerFinalizer) pango_font_description_free);

  return(_result);
}
 

USER_OBJECT_
S_pango_font_description_copy(USER_OBJECT_ s_object)
{
  PangoFontDescription* object = ((PangoFontDescription*)getPtrValue(s_object));

  PangoFontDescription* ans;
  USER_OBJECT_ _result = NULL_USER_OBJECT;

  ans = pango_font_description_copy(object);

  _result = toRPointerWithFinalizer(ans ? pango_font_description_copy(ans) : NULL, "PangoFontDescription", (RPointerFinalizer) pango_font_description_free);

  return(_result);
}
 

USER_OBJECT_
S_pango_font_description_copy_static(USER_OBJECT_ s_object)
{
  PangoFontDescription* object = ((PangoFontDescription*)getPtrValue(s_object));

  PangoFontDescription* ans;
  USER_OBJECT_ _result = NULL_USER_OBJECT;

  ans = pango_font_description_copy_static(object);

  _result = toRPointerWithFinalizer(ans ? pango_font_description_copy(ans) : NULL, "PangoFontDescription", (RPointerFinalizer) pango_font_description_free);

  return(_result);
}
 

USER_OBJECT_
S_pango_font_description_hash(USER_OBJECT_ s_object)
{
  PangoFontDescription* object = ((PangoFontDescription*)getPtrValue(s_object));

  guint ans;
  USER_OBJECT_ _result = NULL_USER_OBJECT;

  ans = pango_font_description_hash(object);

  _result = asRNumeric(ans);

  return(_result);
}
 

USER_OBJECT_
S_pango_font_description_equal(USER_OBJECT_ s_object, USER_OBJECT_ s_desc2)
{
  PangoFontDescription* object = ((PangoFontDescription*)getPtrValue(s_object));
  const PangoFontDescription* desc2 = ((const PangoFontDescription*)getPtrValue(s_desc2));

  gboolean ans;
  USER_OBJECT_ _result = NULL_USER_OBJECT;

  ans = pango_font_description_equal(object, desc2);

  _result = asRLogical(ans);

  return(_result);
}
 

USER_OBJECT_
S_pango_font_description_free(USER_OBJECT_ s_object)
{
  PangoFontDescription* object = ((PangoFontDescription*)getPtrValue(s_object));

  USER_OBJECT_ _result = NULL_USER_OBJECT;

  pango_font_description_free(object);


  return(_result);
}
 

USER_OBJECT_
S_pango_font_description_set_family(USER_OBJECT_ s_object, USER_OBJECT_ s_family)
{
  PangoFontDescription* object = ((PangoFontDescription*)getPtrValue(s_object));
  const char* family = ((const char*)asCString(s_family));

  USER_OBJECT_ _result = NULL_USER_OBJECT;

  pango_font_description_set_family(object, family);


  return(_result);
}
 

USER_OBJECT_
S_pango_font_description_set_family_static(USER_OBJECT_ s_object, USER_OBJECT_ s_family)
{
  PangoFontDescription* object = ((PangoFontDescription*)getPtrValue(s_object));
  const char* family = ((const char*)asCString(s_family));

  USER_OBJECT_ _result = NULL_USER_OBJECT;

  pango_font_description_set_family_static(object, family);


  return(_result);
}
 

USER_OBJECT_
S_pango_font_description_get_family(USER_OBJECT_ s_object)
{
  PangoFontDescription* object = ((PangoFontDescription*)getPtrValue(s_object));

  const char* ans;
  USER_OBJECT_ _result = NULL_USER_OBJECT;

  ans = pango_font_description_get_family(object);

  _result = asRString(ans);

  return(_result);
}
 

USER_OBJECT_
S_pango_font_description_set_style(USER_OBJECT_ s_object, USER_OBJECT_ s_style)
{
  PangoFontDescription* object = ((PangoFontDescription*)getPtrValue(s_object));
  PangoStyle style = ((PangoStyle)asCEnum(s_style, PANGO_TYPE_STYLE));

  USER_OBJECT_ _result = NULL_USER_OBJECT;

  pango_font_description_set_style(object, style);


  return(_result);
}
 

USER_OBJECT_
S_pango_font_description_get_style(USER_OBJECT_ s_object)
{
  PangoFontDescription* object = ((PangoFontDescription*)getPtrValue(s_object));

  PangoStyle ans;
  USER_OBJECT_ _result = NULL_USER_OBJECT;

  ans = pango_font_description_get_style(object);

  _result = asREnum(ans, PANGO_TYPE_STYLE);

  return(_result);
}
 

USER_OBJECT_
S_pango_font_description_set_variant(USER_OBJECT_ s_object, USER_OBJECT_ s_variant)
{
  PangoFontDescription* object = ((PangoFontDescription*)getPtrValue(s_object));
  PangoVariant variant = ((PangoVariant)asCEnum(s_variant, PANGO_TYPE_VARIANT));

  USER_OBJECT_ _result = NULL_USER_OBJECT;

  pango_font_description_set_variant(object, variant);


  return(_result);
}
 

USER_OBJECT_
S_pango_font_description_get_variant(USER_OBJECT_ s_object)
{
  PangoFontDescription* object = ((PangoFontDescription*)getPtrValue(s_object));

  PangoVariant ans;
  USER_OBJECT_ _result = NULL_USER_OBJECT;

  ans = pango_font_description_get_variant(object);

  _result = asREnum(ans, PANGO_TYPE_VARIANT);

  return(_result);
}
 

USER_OBJECT_
S_pango_font_description_set_weight(USER_OBJECT_ s_object, USER_OBJECT_ s_weight)
{
  PangoFontDescription* object = ((PangoFontDescription*)getPtrValue(s_object));
  PangoWeight weight = ((PangoWeight)asCEnum(s_weight, PANGO_TYPE_WEIGHT));

  USER_OBJECT_ _result = NULL_USER_OBJECT;

  pango_font_description_set_weight(object, weight);


  return(_result);
}
 

USER_OBJECT_
S_pango_font_description_get_weight(USER_OBJECT_ s_object)
{
  PangoFontDescription* object = ((PangoFontDescription*)getPtrValue(s_object));

  PangoWeight ans;
  USER_OBJECT_ _result = NULL_USER_OBJECT;

  ans = pango_font_description_get_weight(object);

  _result = asREnum(ans, PANGO_TYPE_WEIGHT);

  return(_result);
}
 

USER_OBJECT_
S_pango_font_description_set_stretch(USER_OBJECT_ s_object, USER_OBJECT_ s_stretch)
{
  PangoFontDescription* object = ((PangoFontDescription*)getPtrValue(s_object));
  PangoStretch stretch = ((PangoStretch)asCEnum(s_stretch, PANGO_TYPE_STRETCH));

  USER_OBJECT_ _result = NULL_USER_OBJECT;

  pango_font_description_set_stretch(object, stretch);


  return(_result);
}
 

USER_OBJECT_
S_pango_font_description_get_stretch(USER_OBJECT_ s_object)
{
  PangoFontDescription* object = ((PangoFontDescription*)getPtrValue(s_object));

  PangoStretch ans;
  USER_OBJECT_ _result = NULL_USER_OBJECT;

  ans = pango_font_description_get_stretch(object);

  _result = asREnum(ans, PANGO_TYPE_STRETCH);

  return(_result);
}
 

USER_OBJECT_
S_pango_font_description_set_absolute_size(USER_OBJECT_ s_object, USER_OBJECT_ s_size)
{
  PangoFontDescription* object = ((PangoFontDescription*)getPtrValue(s_object));
  double size = ((double)asCNumeric(s_size));

  USER_OBJECT_ _result = NULL_USER_OBJECT;

  pango_font_description_set_absolute_size(object, size);


  return(_result);
}
 

USER_OBJECT_
S_pango_font_description_get_size_is_absolute(USER_OBJECT_ s_object)
{
  PangoFontDescription* object = ((PangoFontDescription*)getPtrValue(s_object));

  gboolean ans;
  USER_OBJECT_ _result = NULL_USER_OBJECT;

  ans = pango_font_description_get_size_is_absolute(object);

  _result = asRLogical(ans);

  return(_result);
}
 

USER_OBJECT_
S_pango_font_description_set_size(USER_OBJECT_ s_object, USER_OBJECT_ s_size)
{
  PangoFontDescription* object = ((PangoFontDescription*)getPtrValue(s_object));
  gint size = ((gint)asCInteger(s_size));

  USER_OBJECT_ _result = NULL_USER_OBJECT;

  pango_font_description_set_size(object, size);


  return(_result);
}
 

USER_OBJECT_
S_pango_font_description_get_size(USER_OBJECT_ s_object)
{
  PangoFontDescription* object = ((PangoFontDescription*)getPtrValue(s_object));

  gint ans;
  USER_OBJECT_ _result = NULL_USER_OBJECT;

  ans = pango_font_description_get_size(object);

  _result = asRInteger(ans);

  return(_result);
}
 

USER_OBJECT_
S_pango_font_description_get_set_fields(USER_OBJECT_ s_object)
{
  PangoFontDescription* object = ((PangoFontDescription*)getPtrValue(s_object));

  PangoFontMask ans;
  USER_OBJECT_ _result = NULL_USER_OBJECT;

  ans = pango_font_description_get_set_fields(object);

  _result = asRFlag(ans, PANGO_TYPE_FONT_MASK);

  return(_result);
}
 

USER_OBJECT_
S_pango_font_description_unset_fields(USER_OBJECT_ s_object, USER_OBJECT_ s_to_unset)
{
  PangoFontDescription* object = ((PangoFontDescription*)getPtrValue(s_object));
  PangoFontMask to_unset = ((PangoFontMask)asCFlag(s_to_unset, PANGO_TYPE_FONT_MASK));

  USER_OBJECT_ _result = NULL_USER_OBJECT;

  pango_font_description_unset_fields(object, to_unset);


  return(_result);
}
 

USER_OBJECT_
S_pango_font_description_merge(USER_OBJECT_ s_object, USER_OBJECT_ s_desc_to_merge, USER_OBJECT_ s_replace_existing)
{
  PangoFontDescription* object = ((PangoFontDescription*)getPtrValue(s_object));
  const PangoFontDescription* desc_to_merge = ((const PangoFontDescription*)getPtrValue(s_desc_to_merge));
  gboolean replace_existing = ((gboolean)asCLogical(s_replace_existing));

  USER_OBJECT_ _result = NULL_USER_OBJECT;

  pango_font_description_merge(object, desc_to_merge, replace_existing);


  return(_result);
}
 

USER_OBJECT_
S_pango_font_description_merge_static(USER_OBJECT_ s_object, USER_OBJECT_ s_desc_to_merge, USER_OBJECT_ s_replace_existing)
{
  PangoFontDescription* object = ((PangoFontDescription*)getPtrValue(s_object));
  const PangoFontDescription* desc_to_merge = ((const PangoFontDescription*)getPtrValue(s_desc_to_merge));
  gboolean replace_existing = ((gboolean)asCLogical(s_replace_existing));

  USER_OBJECT_ _result = NULL_USER_OBJECT;

  pango_font_description_merge_static(object, desc_to_merge, replace_existing);


  return(_result);
}
 

USER_OBJECT_
S_pango_font_description_better_match(USER_OBJECT_ s_object, USER_OBJECT_ s_old_match, USER_OBJECT_ s_new_match)
{
  PangoFontDescription* object = ((PangoFontDescription*)getPtrValue(s_object));
  const PangoFontDescription* old_match = GET_LENGTH(s_old_match) == 0 ? NULL : ((const PangoFontDescription*)getPtrValue(s_old_match));
  const PangoFontDescription* new_match = ((const PangoFontDescription*)getPtrValue(s_new_match));

  gboolean ans;
  USER_OBJECT_ _result = NULL_USER_OBJECT;

  ans = pango_font_description_better_match(object, old_match, new_match);

  _result = asRLogical(ans);

  return(_result);
}
 

USER_OBJECT_
S_pango_font_description_from_string(USER_OBJECT_ s_str)
{
  const char* str = ((const char*)asCString(s_str));

  PangoFontDescription* ans;
  USER_OBJECT_ _result = NULL_USER_OBJECT;

  ans = pango_font_description_from_string(str);

  _result = toRPointerWithFinalizer(ans ? pango_font_description_copy(ans) : NULL, "PangoFontDescription", (RPointerFinalizer) pango_font_description_free);

  return(_result);
}
 

USER_OBJECT_
S_pango_font_description_to_string(USER_OBJECT_ s_object)
{
  PangoFontDescription* object = ((PangoFontDescription*)getPtrValue(s_object));

  char* ans;
  USER_OBJECT_ _result = NULL_USER_OBJECT;

  ans = pango_font_description_to_string(object);

  _result = asRString(ans);
  CLEANUP(g_free, ans);

  return(_result);
}
 

USER_OBJECT_
S_pango_font_description_to_filename(USER_OBJECT_ s_object)
{
  PangoFontDescription* object = ((PangoFontDescription*)getPtrValue(s_object));

  char* ans;
  USER_OBJECT_ _result = NULL_USER_OBJECT;

  ans = pango_font_description_to_filename(object);

  _result = asRString(ans);
  CLEANUP(g_free, ans);

  return(_result);
}
 

USER_OBJECT_
S_pango_font_metrics_get_type(void)
{

  GType ans;
  USER_OBJECT_ _result = NULL_USER_OBJECT;

  ans = pango_font_metrics_get_type();

  _result = asRGType(ans);

  return(_result);
}
 

USER_OBJECT_
S_pango_font_metrics_ref(USER_OBJECT_ s_object)
{
  PangoFontMetrics* object = ((PangoFontMetrics*)getPtrValue(s_object));

  PangoFontMetrics* ans;
  USER_OBJECT_ _result = NULL_USER_OBJECT;

  ans = pango_font_metrics_ref(object);

  _result = toRPointerWithFinalizer(ans ? pango_font_metrics_ref(ans) : NULL, "PangoFontMetrics", (RPointerFinalizer) pango_font_metrics_unref);

  return(_result);
}
 

USER_OBJECT_
S_pango_font_metrics_unref(USER_OBJECT_ s_object)
{
  PangoFontMetrics* object = ((PangoFontMetrics*)getPtrValue(s_object));

  USER_OBJECT_ _result = NULL_USER_OBJECT;

  pango_font_metrics_unref(object);


  return(_result);
}
 

USER_OBJECT_
S_pango_font_metrics_get_ascent(USER_OBJECT_ s_object)
{
  PangoFontMetrics* object = ((PangoFontMetrics*)getPtrValue(s_object));

  int ans;
  USER_OBJECT_ _result = NULL_USER_OBJECT;

  ans = pango_font_metrics_get_ascent(object);

  _result = asRInteger(ans);

  return(_result);
}
 

USER_OBJECT_
S_pango_font_metrics_get_descent(USER_OBJECT_ s_object)
{
  PangoFontMetrics* object = ((PangoFontMetrics*)getPtrValue(s_object));

  int ans;
  USER_OBJECT_ _result = NULL_USER_OBJECT;

  ans = pango_font_metrics_get_descent(object);

  _result = asRInteger(ans);

  return(_result);
}
 

USER_OBJECT_
S_pango_font_metrics_get_approximate_char_width(USER_OBJECT_ s_object)
{
  PangoFontMetrics* object = ((PangoFontMetrics*)getPtrValue(s_object));

  int ans;
  USER_OBJECT_ _result = NULL_USER_OBJECT;

  ans = pango_font_metrics_get_approximate_char_width(object);

  _result = asRInteger(ans);

  return(_result);
}
 

USER_OBJECT_
S_pango_font_metrics_get_approximate_digit_width(USER_OBJECT_ s_object)
{
  PangoFontMetrics* object = ((PangoFontMetrics*)getPtrValue(s_object));

  int ans;
  USER_OBJECT_ _result = NULL_USER_OBJECT;

  ans = pango_font_metrics_get_approximate_digit_width(object);

  _result = asRInteger(ans);

  return(_result);
}
 

USER_OBJECT_
S_pango_font_metrics_get_strikethrough_position(USER_OBJECT_ s_object)
{
  PangoFontMetrics* object = ((PangoFontMetrics*)getPtrValue(s_object));

  int ans;
  USER_OBJECT_ _result = NULL_USER_OBJECT;

  ans = pango_font_metrics_get_strikethrough_position(object);

  _result = asRInteger(ans);

  return(_result);
}
 

USER_OBJECT_
S_pango_font_metrics_get_strikethrough_thickness(USER_OBJECT_ s_object)
{
  PangoFontMetrics* object = ((PangoFontMetrics*)getPtrValue(s_object));

  int ans;
  USER_OBJECT_ _result = NULL_USER_OBJECT;

  ans = pango_font_metrics_get_strikethrough_thickness(object);

  _result = asRInteger(ans);

  return(_result);
}
 

USER_OBJECT_
S_pango_font_metrics_get_underline_position(USER_OBJECT_ s_object)
{
  PangoFontMetrics* object = ((PangoFontMetrics*)getPtrValue(s_object));

  int ans;
  USER_OBJECT_ _result = NULL_USER_OBJECT;

  ans = pango_font_metrics_get_underline_position(object);

  _result = asRInteger(ans);

  return(_result);
}
 

USER_OBJECT_
S_pango_font_metrics_get_underline_thickness(USER_OBJECT_ s_object)
{
  PangoFontMetrics* object = ((PangoFontMetrics*)getPtrValue(s_object));

  int ans;
  USER_OBJECT_ _result = NULL_USER_OBJECT;

  ans = pango_font_metrics_get_underline_thickness(object);

  _result = asRInteger(ans);

  return(_result);
}
 

USER_OBJECT_
S_pango_font_family_get_type(void)
{

  GType ans;
  USER_OBJECT_ _result = NULL_USER_OBJECT;

  ans = pango_font_family_get_type();

  _result = asRGType(ans);

  return(_result);
}
 

USER_OBJECT_
S_pango_font_family_list_faces(USER_OBJECT_ s_object)
{
  PangoFontFamily* object = PANGO_FONT_FAMILY(getPtrValue(s_object));

  USER_OBJECT_ _result = NULL_USER_OBJECT;
  PangoFontFace** faces = NULL;
  int n_faces;

  pango_font_family_list_faces(object, &faces, &n_faces);


  _result = retByVal(_result, "faces", toRPointerWithRefArrayWithSize(faces, "PangoFontFace", n_faces), "n.faces", asRInteger(n_faces), NULL);
  CLEANUP(g_free, faces);

  return(_result);
}
 

USER_OBJECT_
S_pango_font_family_get_name(USER_OBJECT_ s_object)
{
  PangoFontFamily* object = PANGO_FONT_FAMILY(getPtrValue(s_object));

  const char* ans;
  USER_OBJECT_ _result = NULL_USER_OBJECT;

  ans = pango_font_family_get_name(object);

  _result = asRString(ans);

  return(_result);
}
 

USER_OBJECT_
S_pango_font_family_is_monospace(USER_OBJECT_ s_object)
{
  PangoFontFamily* object = PANGO_FONT_FAMILY(getPtrValue(s_object));

  gboolean ans;
  USER_OBJECT_ _result = NULL_USER_OBJECT;

  ans = pango_font_family_is_monospace(object);

  _result = asRLogical(ans);

  return(_result);
}
 

USER_OBJECT_
S_pango_font_face_get_type(void)
{

  GType ans;
  USER_OBJECT_ _result = NULL_USER_OBJECT;

  ans = pango_font_face_get_type();

  _result = asRGType(ans);

  return(_result);
}
 

USER_OBJECT_
S_pango_font_face_describe(USER_OBJECT_ s_object)
{
  PangoFontFace* object = PANGO_FONT_FACE(getPtrValue(s_object));

  PangoFontDescription* ans;
  USER_OBJECT_ _result = NULL_USER_OBJECT;

  ans = pango_font_face_describe(object);

  _result = toRPointerWithFinalizer(ans ? pango_font_description_copy(ans) : NULL, "PangoFontDescription", (RPointerFinalizer) pango_font_description_free);

  return(_result);
}
 

USER_OBJECT_
S_pango_font_face_get_face_name(USER_OBJECT_ s_object)
{
  PangoFontFace* object = PANGO_FONT_FACE(getPtrValue(s_object));

  const char* ans;
  USER_OBJECT_ _result = NULL_USER_OBJECT;

  ans = pango_font_face_get_face_name(object);

  _result = asRString(ans);

  return(_result);
}
 

USER_OBJECT_
S_pango_font_face_list_sizes(USER_OBJECT_ s_object)
{
  PangoFontFace* object = PANGO_FONT_FACE(getPtrValue(s_object));

  USER_OBJECT_ _result = NULL_USER_OBJECT;
  int* sizes = NULL;
  int n_sizes;

  pango_font_face_list_sizes(object, &sizes, &n_sizes);


  _result = retByVal(_result, "sizes", asRIntegerArrayWithSize(sizes, n_sizes), "n.sizes", asRInteger(n_sizes), NULL);
  CLEANUP(g_free, sizes);

  return(_result);
}
 

USER_OBJECT_
S_pango_font_get_type(void)
{

  GType ans;
  USER_OBJECT_ _result = NULL_USER_OBJECT;

  ans = pango_font_get_type();

  _result = asRGType(ans);

  return(_result);
}
 

USER_OBJECT_
S_pango_font_describe(USER_OBJECT_ s_object)
{
  PangoFont* object = PANGO_FONT(getPtrValue(s_object));

  PangoFontDescription* ans;
  USER_OBJECT_ _result = NULL_USER_OBJECT;

  ans = pango_font_describe(object);

  _result = toRPointerWithFinalizer(ans ? pango_font_description_copy(ans) : NULL, "PangoFontDescription", (RPointerFinalizer) pango_font_description_free);

  return(_result);
}
 

USER_OBJECT_
S_pango_font_get_coverage(USER_OBJECT_ s_object, USER_OBJECT_ s_language)
{
  PangoFont* object = PANGO_FONT(getPtrValue(s_object));
  PangoLanguage* language = ((PangoLanguage*)getPtrValue(s_language));

  PangoCoverage* ans;
  USER_OBJECT_ _result = NULL_USER_OBJECT;

  ans = pango_font_get_coverage(object, language);

  _result = toRPointerWithFinalizer(ans, "PangoCoverage", (RPointerFinalizer) pango_coverage_unref);

  return(_result);
}
 

USER_OBJECT_
S_pango_font_get_metrics(USER_OBJECT_ s_object, USER_OBJECT_ s_language)
{
  PangoFont* object = PANGO_FONT(getPtrValue(s_object));
  PangoLanguage* language = GET_LENGTH(s_language) == 0 ? NULL : ((PangoLanguage*)getPtrValue(s_language));

  PangoFontMetrics* ans;
  USER_OBJECT_ _result = NULL_USER_OBJECT;

  ans = pango_font_get_metrics(object, language);

  _result = toRPointerWithFinalizer(ans ? pango_font_metrics_ref(ans) : NULL, "PangoFontMetrics", (RPointerFinalizer) pango_font_metrics_unref);

  return(_result);
}
 

USER_OBJECT_
S_pango_font_get_glyph_extents(USER_OBJECT_ s_object, USER_OBJECT_ s_glyph)
{
  PangoFont* object = PANGO_FONT(getPtrValue(s_object));
  PangoGlyph glyph = ((PangoGlyph)asCNumeric(s_glyph));

  USER_OBJECT_ _result = NULL_USER_OBJECT;
  PangoRectangle* ink_rect = ((PangoRectangle *)g_new0(PangoRectangle, 1));
  PangoRectangle* logical_rect = ((PangoRectangle *)g_new0(PangoRectangle, 1));

  pango_font_get_glyph_extents(object, glyph, ink_rect, logical_rect);


  _result = retByVal(_result, "ink.rect", asRPangoRectangle(ink_rect), "logical.rect", asRPangoRectangle(logical_rect), NULL);
  CLEANUP(g_free, ink_rect);
  CLEANUP(g_free, logical_rect);

  return(_result);
}
 

USER_OBJECT_
S_pango_font_get_font_map(USER_OBJECT_ s_object)
{
  PangoFont* object = PANGO_FONT(getPtrValue(s_object));

  PangoFontMap* ans;
  USER_OBJECT_ _result = NULL_USER_OBJECT;

  ans = pango_font_get_font_map(object);

  _result = toRPointerWithRef(ans, "PangoFontMap");

  return(_result);
}
 

USER_OBJECT_
S_pango_font_map_load_font(USER_OBJECT_ s_object, USER_OBJECT_ s_context, USER_OBJECT_ s_desc)
{
  PangoFontMap* object = PANGO_FONT_MAP(getPtrValue(s_object));
  PangoContext* context = PANGO_CONTEXT(getPtrValue(s_context));
  const PangoFontDescription* desc = ((const PangoFontDescription*)getPtrValue(s_desc));

  PangoFont* ans;
  USER_OBJECT_ _result = NULL_USER_OBJECT;

  ans = pango_font_map_load_font(object, context, desc);

  _result = toRPointerWithRef(ans, "PangoFont");

  return(_result);
}
 

USER_OBJECT_
S_pango_font_map_load_fontset(USER_OBJECT_ s_object, USER_OBJECT_ s_context, USER_OBJECT_ s_desc, USER_OBJECT_ s_language)
{
  PangoFontMap* object = PANGO_FONT_MAP(getPtrValue(s_object));
  PangoContext* context = PANGO_CONTEXT(getPtrValue(s_context));
  const PangoFontDescription* desc = ((const PangoFontDescription*)getPtrValue(s_desc));
  PangoLanguage* language = ((PangoLanguage*)getPtrValue(s_language));

  PangoFontset* ans;
  USER_OBJECT_ _result = NULL_USER_OBJECT;

  ans = pango_font_map_load_fontset(object, context, desc, language);

  _result = toRPointerWithRef(ans, "PangoFontset");

  return(_result);
}
 

USER_OBJECT_
S_pango_font_map_list_families(USER_OBJECT_ s_object)
{
  PangoFontMap* object = PANGO_FONT_MAP(getPtrValue(s_object));

  USER_OBJECT_ _result = NULL_USER_OBJECT;
  PangoFontFamily** families = NULL;
  int n_families;

  pango_font_map_list_families(object, &families, &n_families);


  _result = retByVal(_result, "families", toRPointerWithRefArrayWithSize(families, "PangoFontFamily", n_families), "n.families", asRInteger(n_families), NULL);
  CLEANUP(g_free, families);

  return(_result);
}
 

USER_OBJECT_
S_pango_fontset_get_font(USER_OBJECT_ s_object, USER_OBJECT_ s_wc)
{
  PangoFontset* object = PANGO_FONTSET(getPtrValue(s_object));
  guint wc = ((guint)asCNumeric(s_wc));

  PangoFont* ans;
  USER_OBJECT_ _result = NULL_USER_OBJECT;

  ans = pango_fontset_get_font(object, wc);

  _result = toRPointerWithFinalizer(ans, "PangoFont", (RPointerFinalizer) g_object_unref);

  return(_result);
}
 

USER_OBJECT_
S_pango_fontset_get_metrics(USER_OBJECT_ s_object)
{
  PangoFontset* object = PANGO_FONTSET(getPtrValue(s_object));

  PangoFontMetrics* ans;
  USER_OBJECT_ _result = NULL_USER_OBJECT;

  ans = pango_fontset_get_metrics(object);

  _result = toRPointerWithFinalizer(ans ? pango_font_metrics_ref(ans) : NULL, "PangoFontMetrics", (RPointerFinalizer) pango_font_metrics_unref);

  return(_result);
}
 

USER_OBJECT_
S_pango_fontset_foreach(USER_OBJECT_ s_object, USER_OBJECT_ s_func, USER_OBJECT_ s_data)
{
  PangoFontsetForeachFunc func = ((PangoFontsetForeachFunc)S_PangoFontsetForeachFunc);
  R_CallbackData* data = R_createCBData(s_func, s_data);
  PangoFontset* object = PANGO_FONTSET(getPtrValue(s_object));

  USER_OBJECT_ _result = NULL_USER_OBJECT;

  pango_fontset_foreach(object, func, data);

  R_freeCBData(data);

  return(_result);
}
 

USER_OBJECT_
S_pango_glyph_string_new(void)
{

  PangoGlyphString* ans;
  USER_OBJECT_ _result = NULL_USER_OBJECT;

  ans = pango_glyph_string_new();

  _result = toRPointerWithFinalizer(ans ? pango_glyph_string_copy(ans) : NULL, "PangoGlyphString", (RPointerFinalizer) pango_glyph_string_free);

  return(_result);
}
 

USER_OBJECT_
S_pango_glyph_string_set_size(USER_OBJECT_ s_object, USER_OBJECT_ s_new_len)
{
  PangoGlyphString* object = ((PangoGlyphString*)getPtrValue(s_object));
  gint new_len = ((gint)asCInteger(s_new_len));

  USER_OBJECT_ _result = NULL_USER_OBJECT;

  pango_glyph_string_set_size(object, new_len);


  return(_result);
}
 

USER_OBJECT_
S_pango_glyph_string_get_type(void)
{

  GType ans;
  USER_OBJECT_ _result = NULL_USER_OBJECT;

  ans = pango_glyph_string_get_type();

  _result = asRGType(ans);

  return(_result);
}
 

USER_OBJECT_
S_pango_glyph_string_copy(USER_OBJECT_ s_object)
{
  PangoGlyphString* object = ((PangoGlyphString*)getPtrValue(s_object));

  PangoGlyphString* ans;
  USER_OBJECT_ _result = NULL_USER_OBJECT;

  ans = pango_glyph_string_copy(object);

  _result = toRPointerWithFinalizer(ans ? pango_glyph_string_copy(ans) : NULL, "PangoGlyphString", (RPointerFinalizer) pango_glyph_string_free);

  return(_result);
}
 

USER_OBJECT_
S_pango_glyph_string_free(USER_OBJECT_ s_object)
{
  PangoGlyphString* object = ((PangoGlyphString*)getPtrValue(s_object));

  USER_OBJECT_ _result = NULL_USER_OBJECT;

  pango_glyph_string_free(object);


  return(_result);
}
 

USER_OBJECT_
S_pango_glyph_string_extents(USER_OBJECT_ s_object, USER_OBJECT_ s_font)
{
  PangoGlyphString* object = ((PangoGlyphString*)getPtrValue(s_object));
  PangoFont* font = PANGO_FONT(getPtrValue(s_font));

  USER_OBJECT_ _result = NULL_USER_OBJECT;
  PangoRectangle* ink_rect = ((PangoRectangle *)g_new0(PangoRectangle, 1));
  PangoRectangle* logical_rect = ((PangoRectangle *)g_new0(PangoRectangle, 1));

  pango_glyph_string_extents(object, font, ink_rect, logical_rect);


  _result = retByVal(_result, "ink.rect", asRPangoRectangle(ink_rect), "logical.rect", asRPangoRectangle(logical_rect), NULL);
  CLEANUP(g_free, ink_rect);
  CLEANUP(g_free, logical_rect);

  return(_result);
}
 

USER_OBJECT_
S_pango_glyph_string_extents_range(USER_OBJECT_ s_object, USER_OBJECT_ s_start, USER_OBJECT_ s_end, USER_OBJECT_ s_font)
{
  PangoGlyphString* object = ((PangoGlyphString*)getPtrValue(s_object));
  int start = ((int)asCInteger(s_start));
  int end = ((int)asCInteger(s_end));
  PangoFont* font = PANGO_FONT(getPtrValue(s_font));

  USER_OBJECT_ _result = NULL_USER_OBJECT;
  PangoRectangle* ink_rect = ((PangoRectangle *)g_new0(PangoRectangle, 1));
  PangoRectangle* logical_rect = ((PangoRectangle *)g_new0(PangoRectangle, 1));

  pango_glyph_string_extents_range(object, start, end, font, ink_rect, logical_rect);


  _result = retByVal(_result, "ink.rect", asRPangoRectangle(ink_rect), "logical.rect", asRPangoRectangle(logical_rect), NULL);
  CLEANUP(g_free, ink_rect);
  CLEANUP(g_free, logical_rect);

  return(_result);
}
 

USER_OBJECT_
S_pango_glyph_string_index_to_x(USER_OBJECT_ s_object, USER_OBJECT_ s_text, USER_OBJECT_ s_length, USER_OBJECT_ s_analysis, USER_OBJECT_ s_index, USER_OBJECT_ s_trailing)
{
  PangoGlyphString* object = ((PangoGlyphString*)getPtrValue(s_object));
  char* text = ((char*)asCString(s_text));
  int length = ((int)asCInteger(s_length));
  PangoAnalysis* analysis = ((PangoAnalysis*)getPtrValue(s_analysis));
  int index = ((int)asCInteger(s_index));
  gboolean trailing = ((gboolean)asCLogical(s_trailing));

  USER_OBJECT_ _result = NULL_USER_OBJECT;
  int x_pos;

  pango_glyph_string_index_to_x(object, text, length, analysis, index, trailing, &x_pos);


  _result = retByVal(_result, "x.pos", asRInteger(x_pos), NULL);

  return(_result);
}
 

USER_OBJECT_
S_pango_glyph_string_x_to_index(USER_OBJECT_ s_object, USER_OBJECT_ s_text, USER_OBJECT_ s_length, USER_OBJECT_ s_analysis, USER_OBJECT_ s_x_pos)
{
  PangoGlyphString* object = ((PangoGlyphString*)getPtrValue(s_object));
  char* text = ((char*)asCString(s_text));
  int length = ((int)asCInteger(s_length));
  PangoAnalysis* analysis = ((PangoAnalysis*)getPtrValue(s_analysis));
  int x_pos = ((int)asCInteger(s_x_pos));

  USER_OBJECT_ _result = NULL_USER_OBJECT;
  int index;
  int trailing;

  pango_glyph_string_x_to_index(object, text, length, analysis, x_pos, &index, &trailing);


  _result = retByVal(_result, "index", asRInteger(index), "trailing", asRInteger(trailing), NULL);

  return(_result);
}
 

USER_OBJECT_
S_pango_glyph_item_split(USER_OBJECT_ s_orig, USER_OBJECT_ s_text, USER_OBJECT_ s_split_index)
{
  PangoGlyphItem* orig = ((PangoGlyphItem*)getPtrValue(s_orig));
  const char* text = ((const char*)asCString(s_text));
  int split_index = ((int)asCInteger(s_split_index));

  PangoGlyphItem* ans;
  USER_OBJECT_ _result = NULL_USER_OBJECT;

  ans = pango_glyph_item_split(orig, text, split_index);

  _result = toRPointerWithFinalizer(ans, "PangoGlyphItem", (RPointerFinalizer) pango_glyph_item_free);

  return(_result);
}
 

USER_OBJECT_
S_pango_glyph_item_apply_attrs(USER_OBJECT_ s_glyph_item, USER_OBJECT_ s_text, USER_OBJECT_ s_list)
{
  PangoGlyphItem* glyph_item = ((PangoGlyphItem*)getPtrValue(s_glyph_item));
  const char* text = ((const char*)asCString(s_text));
  PangoAttrList* list = ((PangoAttrList*)getPtrValue(s_list));

  GSList* ans;
  USER_OBJECT_ _result = NULL_USER_OBJECT;

  ans = pango_glyph_item_apply_attrs(glyph_item, text, list);

  _result = asRGSListWithFinalizer(ans, "PangoGlyphItem", (RPointerFinalizer) pango_glyph_item_free);
  CLEANUP(g_slist_free, ans);

  return(_result);
}
 

USER_OBJECT_
S_pango_glyph_item_letter_space(USER_OBJECT_ s_glyph_item, USER_OBJECT_ s_text, USER_OBJECT_ s_log_attrs, USER_OBJECT_ s_letter_spacing)
{
  PangoGlyphItem* glyph_item = ((PangoGlyphItem*)getPtrValue(s_glyph_item));
  const char* text = ((const char*)asCString(s_text));
  PangoLogAttr* log_attrs = ((PangoLogAttr*)getPtrValue(s_log_attrs));
  int letter_spacing = ((int)asCInteger(s_letter_spacing));

  USER_OBJECT_ _result = NULL_USER_OBJECT;

  pango_glyph_item_letter_space(glyph_item, text, log_attrs, letter_spacing);


  return(_result);
}
 

USER_OBJECT_
S_pango_matrix_translate(USER_OBJECT_ s_object, USER_OBJECT_ s_tx, USER_OBJECT_ s_ty)
{
  PangoMatrix* object = ((PangoMatrix*)getPtrValue(s_object));
  double tx = ((double)asCNumeric(s_tx));
  double ty = ((double)asCNumeric(s_ty));

  USER_OBJECT_ _result = NULL_USER_OBJECT;

  pango_matrix_translate(object, tx, ty);


  return(_result);
}
 

USER_OBJECT_
S_pango_matrix_scale(USER_OBJECT_ s_object, USER_OBJECT_ s_scale_x, USER_OBJECT_ s_scale_y)
{
  PangoMatrix* object = ((PangoMatrix*)getPtrValue(s_object));
  double scale_x = ((double)asCNumeric(s_scale_x));
  double scale_y = ((double)asCNumeric(s_scale_y));

  USER_OBJECT_ _result = NULL_USER_OBJECT;

  pango_matrix_scale(object, scale_x, scale_y);


  return(_result);
}
 

USER_OBJECT_
S_pango_matrix_rotate(USER_OBJECT_ s_object, USER_OBJECT_ s_degrees)
{
  PangoMatrix* object = ((PangoMatrix*)getPtrValue(s_object));
  double degrees = ((double)asCNumeric(s_degrees));

  USER_OBJECT_ _result = NULL_USER_OBJECT;

  pango_matrix_rotate(object, degrees);


  return(_result);
}
 

USER_OBJECT_
S_pango_matrix_concat(USER_OBJECT_ s_object, USER_OBJECT_ s_new_matrix)
{
  PangoMatrix* object = ((PangoMatrix*)getPtrValue(s_object));
  const PangoMatrix* new_matrix = ((const PangoMatrix*)getPtrValue(s_new_matrix));

  USER_OBJECT_ _result = NULL_USER_OBJECT;

  pango_matrix_concat(object, new_matrix);


  return(_result);
}
 

USER_OBJECT_
S_pango_matrix_copy(USER_OBJECT_ s_object)
{
  PangoMatrix* object = ((PangoMatrix*)getPtrValue(s_object));

  PangoMatrix* ans;
  USER_OBJECT_ _result = NULL_USER_OBJECT;

  ans = pango_matrix_copy(object);

  _result = toRPointerWithFinalizer(ans ? pango_matrix_copy(ans) : NULL, "PangoMatrix", (RPointerFinalizer) pango_matrix_free);

  return(_result);
}
 

USER_OBJECT_
S_pango_shape(USER_OBJECT_ s_text, USER_OBJECT_ s_length, USER_OBJECT_ s_analysis, USER_OBJECT_ s_glyphs)
{
  const gchar* text = ((const gchar*)asCString(s_text));
  gint length = ((gint)asCInteger(s_length));
  PangoAnalysis* analysis = ((PangoAnalysis*)getPtrValue(s_analysis));
  PangoGlyphString* glyphs = ((PangoGlyphString*)getPtrValue(s_glyphs));

  USER_OBJECT_ _result = NULL_USER_OBJECT;

  pango_shape(text, length, analysis, glyphs);


  return(_result);
}
 

USER_OBJECT_
S_pango_item_copy(USER_OBJECT_ s_item)
{
  PangoItem* item = ((PangoItem*)getPtrValue(s_item));

  PangoItem* ans;
  USER_OBJECT_ _result = NULL_USER_OBJECT;

  ans = pango_item_copy(item);

  _result = toRPointerWithFinalizer(ans, "PangoItem", (RPointerFinalizer) pango_item_free);

  return(_result);
}
 

USER_OBJECT_
S_pango_item_new(void)
{

  PangoItem* ans;
  USER_OBJECT_ _result = NULL_USER_OBJECT;

  ans = pango_item_new();

  _result = toRPointerWithFinalizer(ans, "PangoItem", (RPointerFinalizer) pango_item_free);

  return(_result);
}
 

USER_OBJECT_
S_pango_item_split(USER_OBJECT_ s_orig, USER_OBJECT_ s_split_index, USER_OBJECT_ s_split_offset)
{
  PangoItem* orig = ((PangoItem*)getPtrValue(s_orig));
  int split_index = ((int)asCInteger(s_split_index));
  int split_offset = ((int)asCInteger(s_split_offset));

  PangoItem* ans;
  USER_OBJECT_ _result = NULL_USER_OBJECT;

  ans = pango_item_split(orig, split_index, split_offset);

  _result = toRPointerWithFinalizer(ans, "PangoItem", (RPointerFinalizer) pango_item_free);

  return(_result);
}
 

USER_OBJECT_
S_pango_reorder_items(USER_OBJECT_ s_logical_items)
{
  GList* logical_items = asCGList(s_logical_items);

  GList* ans;
  USER_OBJECT_ _result = NULL_USER_OBJECT;

  ans = pango_reorder_items(logical_items);

  _result = asRGListWithFinalizer(ans, "PangoItem", (RPointerFinalizer) pango_item_free);
  CLEANUP(g_list_free, ans);
  CLEANUP(g_list_free, ((GList*)logical_items));

  return(_result);
}
 

USER_OBJECT_
S_pango_layout_get_type(void)
{

  GType ans;
  USER_OBJECT_ _result = NULL_USER_OBJECT;

  ans = pango_layout_get_type();

  _result = asRGType(ans);

  return(_result);
}
 

USER_OBJECT_
S_pango_layout_new(USER_OBJECT_ s_context)
{
  PangoContext* context = PANGO_CONTEXT(getPtrValue(s_context));

  PangoLayout* ans;
  USER_OBJECT_ _result = NULL_USER_OBJECT;

  ans = pango_layout_new(context);

  _result = toRPointerWithFinalizer(ans, "PangoLayout", (RPointerFinalizer) g_object_unref);

  return(_result);
}
 

USER_OBJECT_
S_pango_layout_copy(USER_OBJECT_ s_object)
{
  PangoLayout* object = PANGO_LAYOUT(getPtrValue(s_object));

  PangoLayout* ans;
  USER_OBJECT_ _result = NULL_USER_OBJECT;

  ans = pango_layout_copy(object);

  _result = toRPointerWithFinalizer(ans, "PangoLayout", (RPointerFinalizer) g_object_unref);

  return(_result);
}
 

USER_OBJECT_
S_pango_layout_get_context(USER_OBJECT_ s_object)
{
  PangoLayout* object = PANGO_LAYOUT(getPtrValue(s_object));

  PangoContext* ans;
  USER_OBJECT_ _result = NULL_USER_OBJECT;

  ans = pango_layout_get_context(object);

  _result = toRPointerWithRef(ans, "PangoContext");

  return(_result);
}
 

USER_OBJECT_
S_pango_layout_set_attributes(USER_OBJECT_ s_object, USER_OBJECT_ s_attrs)
{
  PangoLayout* object = PANGO_LAYOUT(getPtrValue(s_object));
  PangoAttrList* attrs = ((PangoAttrList*)getPtrValue(s_attrs));

  USER_OBJECT_ _result = NULL_USER_OBJECT;

  pango_layout_set_attributes(object, attrs);


  return(_result);
}
 

USER_OBJECT_
S_pango_layout_get_attributes(USER_OBJECT_ s_object)
{
  PangoLayout* object = PANGO_LAYOUT(getPtrValue(s_object));

  PangoAttrList* ans;
  USER_OBJECT_ _result = NULL_USER_OBJECT;

  ans = pango_layout_get_attributes(object);

  _result = toRPointerWithFinalizer(ans ? pango_attr_list_ref(ans) : NULL, "PangoAttrList", (RPointerFinalizer) pango_attr_list_unref);

  return(_result);
}
 

USER_OBJECT_
S_pango_layout_set_text(USER_OBJECT_ s_object, USER_OBJECT_ s_text, USER_OBJECT_ s_length)
{
  PangoLayout* object = PANGO_LAYOUT(getPtrValue(s_object));
  const char* text = ((const char*)asCString(s_text));
  int length = ((int)asCInteger(s_length));

  USER_OBJECT_ _result = NULL_USER_OBJECT;

  pango_layout_set_text(object, text, length);


  return(_result);
}
 

USER_OBJECT_
S_pango_layout_get_text(USER_OBJECT_ s_object)
{
  PangoLayout* object = PANGO_LAYOUT(getPtrValue(s_object));

  const char* ans;
  USER_OBJECT_ _result = NULL_USER_OBJECT;

  ans = pango_layout_get_text(object);

  _result = asRString(ans);

  return(_result);
}
 

USER_OBJECT_
S_pango_layout_set_markup(USER_OBJECT_ s_object, USER_OBJECT_ s_markup, USER_OBJECT_ s_length)
{
  PangoLayout* object = PANGO_LAYOUT(getPtrValue(s_object));
  const char* markup = ((const char*)asCString(s_markup));
  int length = ((int)asCInteger(s_length));

  USER_OBJECT_ _result = NULL_USER_OBJECT;

  pango_layout_set_markup(object, markup, length);


  return(_result);
}
 

USER_OBJECT_
S_pango_layout_set_markup_with_accel(USER_OBJECT_ s_object, USER_OBJECT_ s_markup, USER_OBJECT_ s_length, USER_OBJECT_ s_accel_marker)
{
  PangoLayout* object = PANGO_LAYOUT(getPtrValue(s_object));
  const char* markup = ((const char*)asCString(s_markup));
  int length = ((int)asCInteger(s_length));
  gunichar accel_marker = ((gunichar)asCNumeric(s_accel_marker));

  USER_OBJECT_ _result = NULL_USER_OBJECT;
  gunichar accel_char;

  pango_layout_set_markup_with_accel(object, markup, length, accel_marker, &accel_char);


  _result = retByVal(_result, "accel.char", asRNumeric(accel_char), NULL);

  return(_result);
}
 

USER_OBJECT_
S_pango_layout_set_font_description(USER_OBJECT_ s_object, USER_OBJECT_ s_desc)
{
  PangoLayout* object = PANGO_LAYOUT(getPtrValue(s_object));
  const PangoFontDescription* desc = GET_LENGTH(s_desc) == 0 ? NULL : ((const PangoFontDescription*)getPtrValue(s_desc));

  USER_OBJECT_ _result = NULL_USER_OBJECT;

  pango_layout_set_font_description(object, desc);


  return(_result);
}
 

USER_OBJECT_
S_pango_layout_get_font_description(USER_OBJECT_ s_object)
{
  PangoLayout* object = PANGO_LAYOUT(getPtrValue(s_object));

  const PangoFontDescription* ans;
  USER_OBJECT_ _result = NULL_USER_OBJECT;

  ans = pango_layout_get_font_description(object);

  _result = toRPointer(ans ? pango_font_description_copy(ans) : NULL, "PangoFontDescription");

  return(_result);
}
 

USER_OBJECT_
S_pango_layout_set_width(USER_OBJECT_ s_object, USER_OBJECT_ s_width)
{
  PangoLayout* object = PANGO_LAYOUT(getPtrValue(s_object));
  int width = ((int)asCInteger(s_width));

  USER_OBJECT_ _result = NULL_USER_OBJECT;

  pango_layout_set_width(object, width);


  return(_result);
}
 

USER_OBJECT_
S_pango_layout_get_width(USER_OBJECT_ s_object)
{
  PangoLayout* object = PANGO_LAYOUT(getPtrValue(s_object));

  int ans;
  USER_OBJECT_ _result = NULL_USER_OBJECT;

  ans = pango_layout_get_width(object);

  _result = asRInteger(ans);

  return(_result);
}
 

USER_OBJECT_
S_pango_layout_set_wrap(USER_OBJECT_ s_object, USER_OBJECT_ s_wrap)
{
  PangoLayout* object = PANGO_LAYOUT(getPtrValue(s_object));
  PangoWrapMode wrap = ((PangoWrapMode)asCEnum(s_wrap, PANGO_TYPE_WRAP_MODE));

  USER_OBJECT_ _result = NULL_USER_OBJECT;

  pango_layout_set_wrap(object, wrap);


  return(_result);
}
 

USER_OBJECT_
S_pango_layout_get_wrap(USER_OBJECT_ s_object)
{
  PangoLayout* object = PANGO_LAYOUT(getPtrValue(s_object));

  PangoWrapMode ans;
  USER_OBJECT_ _result = NULL_USER_OBJECT;

  ans = pango_layout_get_wrap(object);

  _result = asREnum(ans, PANGO_TYPE_WRAP_MODE);

  return(_result);
}
 

USER_OBJECT_
S_pango_layout_set_indent(USER_OBJECT_ s_object, USER_OBJECT_ s_indent)
{
  PangoLayout* object = PANGO_LAYOUT(getPtrValue(s_object));
  int indent = ((int)asCInteger(s_indent));

  USER_OBJECT_ _result = NULL_USER_OBJECT;

  pango_layout_set_indent(object, indent);


  return(_result);
}
 

USER_OBJECT_
S_pango_layout_get_indent(USER_OBJECT_ s_object)
{
  PangoLayout* object = PANGO_LAYOUT(getPtrValue(s_object));

  int ans;
  USER_OBJECT_ _result = NULL_USER_OBJECT;

  ans = pango_layout_get_indent(object);

  _result = asRInteger(ans);

  return(_result);
}
 

USER_OBJECT_
S_pango_layout_set_spacing(USER_OBJECT_ s_object, USER_OBJECT_ s_spacing)
{
  PangoLayout* object = PANGO_LAYOUT(getPtrValue(s_object));
  int spacing = ((int)asCInteger(s_spacing));

  USER_OBJECT_ _result = NULL_USER_OBJECT;

  pango_layout_set_spacing(object, spacing);


  return(_result);
}
 

USER_OBJECT_
S_pango_layout_get_spacing(USER_OBJECT_ s_object)
{
  PangoLayout* object = PANGO_LAYOUT(getPtrValue(s_object));

  int ans;
  USER_OBJECT_ _result = NULL_USER_OBJECT;

  ans = pango_layout_get_spacing(object);

  _result = asRInteger(ans);

  return(_result);
}
 

USER_OBJECT_
S_pango_layout_set_justify(USER_OBJECT_ s_object, USER_OBJECT_ s_justify)
{
  PangoLayout* object = PANGO_LAYOUT(getPtrValue(s_object));
  gboolean justify = ((gboolean)asCLogical(s_justify));

  USER_OBJECT_ _result = NULL_USER_OBJECT;

  pango_layout_set_justify(object, justify);


  return(_result);
}
 

USER_OBJECT_
S_pango_layout_get_justify(USER_OBJECT_ s_object)
{
  PangoLayout* object = PANGO_LAYOUT(getPtrValue(s_object));

  gboolean ans;
  USER_OBJECT_ _result = NULL_USER_OBJECT;

  ans = pango_layout_get_justify(object);

  _result = asRLogical(ans);

  return(_result);
}
 

USER_OBJECT_
S_pango_layout_set_auto_dir(USER_OBJECT_ s_object, USER_OBJECT_ s_auto_dir)
{
  PangoLayout* object = PANGO_LAYOUT(getPtrValue(s_object));
  gboolean auto_dir = ((gboolean)asCLogical(s_auto_dir));

  USER_OBJECT_ _result = NULL_USER_OBJECT;

  pango_layout_set_auto_dir(object, auto_dir);


  return(_result);
}
 

USER_OBJECT_
S_pango_layout_get_auto_dir(USER_OBJECT_ s_object)
{
  PangoLayout* object = PANGO_LAYOUT(getPtrValue(s_object));

  gboolean ans;
  USER_OBJECT_ _result = NULL_USER_OBJECT;

  ans = pango_layout_get_auto_dir(object);

  _result = asRLogical(ans);

  return(_result);
}
 

USER_OBJECT_
S_pango_layout_set_alignment(USER_OBJECT_ s_object, USER_OBJECT_ s_alignment)
{
  PangoLayout* object = PANGO_LAYOUT(getPtrValue(s_object));
  PangoAlignment alignment = ((PangoAlignment)asCEnum(s_alignment, PANGO_TYPE_ALIGNMENT));

  USER_OBJECT_ _result = NULL_USER_OBJECT;

  pango_layout_set_alignment(object, alignment);


  return(_result);
}
 

USER_OBJECT_
S_pango_layout_get_alignment(USER_OBJECT_ s_object)
{
  PangoLayout* object = PANGO_LAYOUT(getPtrValue(s_object));

  PangoAlignment ans;
  USER_OBJECT_ _result = NULL_USER_OBJECT;

  ans = pango_layout_get_alignment(object);

  _result = asREnum(ans, PANGO_TYPE_ALIGNMENT);

  return(_result);
}
 

USER_OBJECT_
S_pango_layout_set_tabs(USER_OBJECT_ s_object, USER_OBJECT_ s_tabs)
{
  PangoLayout* object = PANGO_LAYOUT(getPtrValue(s_object));
  PangoTabArray* tabs = GET_LENGTH(s_tabs) == 0 ? NULL : ((PangoTabArray*)getPtrValue(s_tabs));

  USER_OBJECT_ _result = NULL_USER_OBJECT;

  pango_layout_set_tabs(object, tabs);


  return(_result);
}
 

USER_OBJECT_
S_pango_layout_get_tabs(USER_OBJECT_ s_object)
{
  PangoLayout* object = PANGO_LAYOUT(getPtrValue(s_object));

  PangoTabArray* ans;
  USER_OBJECT_ _result = NULL_USER_OBJECT;

  ans = pango_layout_get_tabs(object);

  _result = toRPointerWithFinalizer(ans ? pango_tab_array_copy(ans) : NULL, "PangoTabArray", (RPointerFinalizer) pango_tab_array_free);

  return(_result);
}
 

USER_OBJECT_
S_pango_layout_set_single_paragraph_mode(USER_OBJECT_ s_object, USER_OBJECT_ s_setting)
{
  PangoLayout* object = PANGO_LAYOUT(getPtrValue(s_object));
  gboolean setting = ((gboolean)asCLogical(s_setting));

  USER_OBJECT_ _result = NULL_USER_OBJECT;

  pango_layout_set_single_paragraph_mode(object, setting);


  return(_result);
}
 

USER_OBJECT_
S_pango_layout_get_single_paragraph_mode(USER_OBJECT_ s_object)
{
  PangoLayout* object = PANGO_LAYOUT(getPtrValue(s_object));

  gboolean ans;
  USER_OBJECT_ _result = NULL_USER_OBJECT;

  ans = pango_layout_get_single_paragraph_mode(object);

  _result = asRLogical(ans);

  return(_result);
}
 

USER_OBJECT_
S_pango_layout_set_ellipsize(USER_OBJECT_ s_object, USER_OBJECT_ s_ellipsize)
{
  PangoLayout* object = PANGO_LAYOUT(getPtrValue(s_object));
  PangoEllipsizeMode ellipsize = ((PangoEllipsizeMode)asCEnum(s_ellipsize, PANGO_TYPE_ELLIPSIZE_MODE));

  USER_OBJECT_ _result = NULL_USER_OBJECT;

  pango_layout_set_ellipsize(object, ellipsize);


  return(_result);
}
 

USER_OBJECT_
S_pango_layout_get_ellipsize(USER_OBJECT_ s_object)
{
  PangoLayout* object = PANGO_LAYOUT(getPtrValue(s_object));

  PangoEllipsizeMode ans;
  USER_OBJECT_ _result = NULL_USER_OBJECT;

  ans = pango_layout_get_ellipsize(object);

  _result = asREnum(ans, PANGO_TYPE_ELLIPSIZE_MODE);

  return(_result);
}
 

USER_OBJECT_
S_pango_layout_context_changed(USER_OBJECT_ s_object)
{
  PangoLayout* object = PANGO_LAYOUT(getPtrValue(s_object));

  USER_OBJECT_ _result = NULL_USER_OBJECT;

  pango_layout_context_changed(object);


  return(_result);
}
 

USER_OBJECT_
S_pango_layout_get_log_attrs(USER_OBJECT_ s_object)
{
  PangoLayout* object = PANGO_LAYOUT(getPtrValue(s_object));

  USER_OBJECT_ _result = NULL_USER_OBJECT;
  PangoLogAttr* attrs = NULL;
  gint n_attrs;

  pango_layout_get_log_attrs(object, &attrs, &n_attrs);


  _result = retByVal(_result, "attrs", asRStructArrayWithSize(attrs, "PangoLogAttr", n_attrs), "n.attrs", asRInteger(n_attrs), NULL);
  CLEANUP(g_free, attrs);

  return(_result);
}
 

USER_OBJECT_
S_pango_layout_index_to_pos(USER_OBJECT_ s_object, USER_OBJECT_ s_index, USER_OBJECT_ s_pos)
{
  PangoLayout* object = PANGO_LAYOUT(getPtrValue(s_object));
  int index = ((int)asCInteger(s_index));
  PangoRectangle* pos = asCPangoRectangle(s_pos);

  USER_OBJECT_ _result = NULL_USER_OBJECT;

  pango_layout_index_to_pos(object, index, pos);


  return(_result);
}
 

USER_OBJECT_
S_pango_layout_get_cursor_pos(USER_OBJECT_ s_object, USER_OBJECT_ s_index)
{
  PangoLayout* object = PANGO_LAYOUT(getPtrValue(s_object));
  int index = ((int)asCInteger(s_index));

  USER_OBJECT_ _result = NULL_USER_OBJECT;
  PangoRectangle* strong_pos = ((PangoRectangle *)g_new0(PangoRectangle, 1));
  PangoRectangle* weak_pos = ((PangoRectangle *)g_new0(PangoRectangle, 1));

  pango_layout_get_cursor_pos(object, index, strong_pos, weak_pos);


  _result = retByVal(_result, "strong.pos", asRPangoRectangle(strong_pos), "weak.pos", asRPangoRectangle(weak_pos), NULL);
  CLEANUP(g_free, strong_pos);
  CLEANUP(g_free, weak_pos);

  return(_result);
}
 

USER_OBJECT_
S_pango_layout_move_cursor_visually(USER_OBJECT_ s_object, USER_OBJECT_ s_strong, USER_OBJECT_ s_old_index, USER_OBJECT_ s_old_trailing, USER_OBJECT_ s_direction)
{
  PangoLayout* object = PANGO_LAYOUT(getPtrValue(s_object));
  gboolean strong = ((gboolean)asCLogical(s_strong));
  int old_index = ((int)asCInteger(s_old_index));
  int old_trailing = ((int)asCInteger(s_old_trailing));
  int direction = ((int)asCInteger(s_direction));

  USER_OBJECT_ _result = NULL_USER_OBJECT;
  int new_index;
  int new_trailing;

  pango_layout_move_cursor_visually(object, strong, old_index, old_trailing, direction, &new_index, &new_trailing);


  _result = retByVal(_result, "new.index", asRInteger(new_index), "new.trailing", asRInteger(new_trailing), NULL);

  return(_result);
}
 

USER_OBJECT_
S_pango_layout_xy_to_index(USER_OBJECT_ s_object, USER_OBJECT_ s_x, USER_OBJECT_ s_y)
{
  PangoLayout* object = PANGO_LAYOUT(getPtrValue(s_object));
  int x = ((int)asCInteger(s_x));
  int y = ((int)asCInteger(s_y));

  gboolean ans;
  USER_OBJECT_ _result = NULL_USER_OBJECT;
  int index;
  int trailing;

  ans = pango_layout_xy_to_index(object, x, y, &index, &trailing);

  _result = asRLogical(ans);

  _result = retByVal(_result, "index", asRInteger(index), "trailing", asRInteger(trailing), NULL);

  return(_result);
}
 

USER_OBJECT_
S_pango_layout_get_extents(USER_OBJECT_ s_object)
{
  PangoLayout* object = PANGO_LAYOUT(getPtrValue(s_object));

  USER_OBJECT_ _result = NULL_USER_OBJECT;
  PangoRectangle* ink_rect = ((PangoRectangle *)g_new0(PangoRectangle, 1));
  PangoRectangle* logical_rect = ((PangoRectangle *)g_new0(PangoRectangle, 1));

  pango_layout_get_extents(object, ink_rect, logical_rect);


  _result = retByVal(_result, "ink.rect", asRPangoRectangle(ink_rect), "logical.rect", asRPangoRectangle(logical_rect), NULL);
  CLEANUP(g_free, ink_rect);
  CLEANUP(g_free, logical_rect);

  return(_result);
}
 

USER_OBJECT_
S_pango_layout_get_pixel_extents(USER_OBJECT_ s_object)
{
  PangoLayout* object = PANGO_LAYOUT(getPtrValue(s_object));

  USER_OBJECT_ _result = NULL_USER_OBJECT;
  PangoRectangle* ink_rect = ((PangoRectangle *)g_new0(PangoRectangle, 1));
  PangoRectangle* logical_rect = ((PangoRectangle *)g_new0(PangoRectangle, 1));

  pango_layout_get_pixel_extents(object, ink_rect, logical_rect);


  _result = retByVal(_result, "ink.rect", asRPangoRectangle(ink_rect), "logical.rect", asRPangoRectangle(logical_rect), NULL);
  CLEANUP(g_free, ink_rect);
  CLEANUP(g_free, logical_rect);

  return(_result);
}
 

USER_OBJECT_
S_pango_layout_get_size(USER_OBJECT_ s_object)
{
  PangoLayout* object = PANGO_LAYOUT(getPtrValue(s_object));

  USER_OBJECT_ _result = NULL_USER_OBJECT;
  int width;
  int height;

  pango_layout_get_size(object, &width, &height);


  _result = retByVal(_result, "width", asRInteger(width), "height", asRInteger(height), NULL);

  return(_result);
}
 

USER_OBJECT_
S_pango_layout_get_pixel_size(USER_OBJECT_ s_object)
{
  PangoLayout* object = PANGO_LAYOUT(getPtrValue(s_object));

  USER_OBJECT_ _result = NULL_USER_OBJECT;
  int width;
  int height;

  pango_layout_get_pixel_size(object, &width, &height);


  _result = retByVal(_result, "width", asRInteger(width), "height", asRInteger(height), NULL);

  return(_result);
}
 

USER_OBJECT_
S_pango_layout_get_line_count(USER_OBJECT_ s_object)
{
  PangoLayout* object = PANGO_LAYOUT(getPtrValue(s_object));

  int ans;
  USER_OBJECT_ _result = NULL_USER_OBJECT;

  ans = pango_layout_get_line_count(object);

  _result = asRInteger(ans);

  return(_result);
}
 

USER_OBJECT_
S_pango_layout_get_line(USER_OBJECT_ s_object, USER_OBJECT_ s_line)
{
  PangoLayout* object = PANGO_LAYOUT(getPtrValue(s_object));
  int line = ((int)asCInteger(s_line));

  PangoLayoutLine* ans;
  USER_OBJECT_ _result = NULL_USER_OBJECT;

  ans = pango_layout_get_line(object, line);

  _result = toRPointer(ans, "PangoLayoutLine");

  return(_result);
}
 

USER_OBJECT_
S_pango_layout_line_x_to_index(USER_OBJECT_ s_object, USER_OBJECT_ s_x_pos)
{
  PangoLayoutLine* object = ((PangoLayoutLine*)getPtrValue(s_object));
  int x_pos = ((int)asCInteger(s_x_pos));

  gboolean ans;
  USER_OBJECT_ _result = NULL_USER_OBJECT;
  int index;
  int trailing;

  ans = pango_layout_line_x_to_index(object, x_pos, &index, &trailing);

  _result = asRLogical(ans);

  _result = retByVal(_result, "index", asRInteger(index), "trailing", asRInteger(trailing), NULL);

  return(_result);
}
 

USER_OBJECT_
S_pango_layout_line_index_to_x(USER_OBJECT_ s_object, USER_OBJECT_ s_index, USER_OBJECT_ s_trailing)
{
  PangoLayoutLine* object = ((PangoLayoutLine*)getPtrValue(s_object));
  int index = ((int)asCInteger(s_index));
  gboolean trailing = ((gboolean)asCLogical(s_trailing));

  USER_OBJECT_ _result = NULL_USER_OBJECT;
  int x_pos;

  pango_layout_line_index_to_x(object, index, trailing, &x_pos);


  _result = retByVal(_result, "x.pos", asRInteger(x_pos), NULL);

  return(_result);
}
 

USER_OBJECT_
S_pango_layout_line_get_x_ranges(USER_OBJECT_ s_object, USER_OBJECT_ s_start_index, USER_OBJECT_ s_end_index)
{
  PangoLayoutLine* object = ((PangoLayoutLine*)getPtrValue(s_object));
  int start_index = ((int)asCInteger(s_start_index));
  int end_index = ((int)asCInteger(s_end_index));

  USER_OBJECT_ _result = NULL_USER_OBJECT;
  int* ranges = NULL;
  int n_ranges;

  pango_layout_line_get_x_ranges(object, start_index, end_index, &ranges, &n_ranges);


  _result = retByVal(_result, "ranges", asRIntegerArrayWithSize(ranges, n_ranges), "n.ranges", asRInteger(n_ranges), NULL);
  CLEANUP(g_free, ranges);

  return(_result);
}
 

USER_OBJECT_
S_pango_layout_line_get_extents(USER_OBJECT_ s_object)
{
  PangoLayoutLine* object = ((PangoLayoutLine*)getPtrValue(s_object));

  USER_OBJECT_ _result = NULL_USER_OBJECT;
  PangoRectangle* ink_rect = ((PangoRectangle *)g_new0(PangoRectangle, 1));
  PangoRectangle* logical_rect = ((PangoRectangle *)g_new0(PangoRectangle, 1));

  pango_layout_line_get_extents(object, ink_rect, logical_rect);


  _result = retByVal(_result, "ink.rect", asRPangoRectangle(ink_rect), "logical.rect", asRPangoRectangle(logical_rect), NULL);
  CLEANUP(g_free, ink_rect);
  CLEANUP(g_free, logical_rect);

  return(_result);
}
 

USER_OBJECT_
S_pango_layout_line_get_pixel_extents(USER_OBJECT_ s_object)
{
  PangoLayoutLine* object = ((PangoLayoutLine*)getPtrValue(s_object));

  USER_OBJECT_ _result = NULL_USER_OBJECT;
  PangoRectangle* ink_rect = ((PangoRectangle *)g_new0(PangoRectangle, 1));
  PangoRectangle* logical_rect = ((PangoRectangle *)g_new0(PangoRectangle, 1));

  pango_layout_line_get_pixel_extents(object, ink_rect, logical_rect);


  _result = retByVal(_result, "ink.rect", asRPangoRectangle(ink_rect), "logical.rect", asRPangoRectangle(logical_rect), NULL);
  CLEANUP(g_free, ink_rect);
  CLEANUP(g_free, logical_rect);

  return(_result);
}
 

USER_OBJECT_
S_pango_layout_iter_get_type(void)
{

  GType ans;
  USER_OBJECT_ _result = NULL_USER_OBJECT;

  ans = pango_layout_iter_get_type();

  _result = asRGType(ans);

  return(_result);
}
 

USER_OBJECT_
S_pango_layout_get_iter(USER_OBJECT_ s_object)
{
  PangoLayout* object = PANGO_LAYOUT(getPtrValue(s_object));

  PangoLayoutIter* ans;
  USER_OBJECT_ _result = NULL_USER_OBJECT;

  ans = pango_layout_get_iter(object);

  _result = toRPointerWithFinalizer(ans ? (ans) : NULL, "PangoLayoutIter", (RPointerFinalizer) pango_layout_iter_free);

  return(_result);
}
 

USER_OBJECT_
S_pango_layout_iter_free(USER_OBJECT_ s_object)
{
  PangoLayoutIter* object = ((PangoLayoutIter*)getPtrValue(s_object));

  USER_OBJECT_ _result = NULL_USER_OBJECT;

  pango_layout_iter_free(object);


  return(_result);
}
 

USER_OBJECT_
S_pango_layout_iter_get_index(USER_OBJECT_ s_object)
{
  PangoLayoutIter* object = ((PangoLayoutIter*)getPtrValue(s_object));

  int ans;
  USER_OBJECT_ _result = NULL_USER_OBJECT;

  ans = pango_layout_iter_get_index(object);

  _result = asRInteger(ans);

  return(_result);
}
 

USER_OBJECT_
S_pango_layout_iter_get_run(USER_OBJECT_ s_object)
{
  PangoLayoutIter* object = ((PangoLayoutIter*)getPtrValue(s_object));

  PangoGlyphItem* ans;
  USER_OBJECT_ _result = NULL_USER_OBJECT;

  ans = pango_layout_iter_get_run(object);

  _result = toRPointerWithFinalizer(ans, "PangoGlyphItem", (RPointerFinalizer) pango_glyph_item_free);

  return(_result);
}
 

USER_OBJECT_
S_pango_layout_iter_get_line(USER_OBJECT_ s_object)
{
  PangoLayoutIter* object = ((PangoLayoutIter*)getPtrValue(s_object));

  PangoLayoutLine* ans;
  USER_OBJECT_ _result = NULL_USER_OBJECT;

  ans = pango_layout_iter_get_line(object);

  _result = toRPointer(ans, "PangoLayoutLine");

  return(_result);
}
 

USER_OBJECT_
S_pango_layout_iter_at_last_line(USER_OBJECT_ s_object)
{
  PangoLayoutIter* object = ((PangoLayoutIter*)getPtrValue(s_object));

  gboolean ans;
  USER_OBJECT_ _result = NULL_USER_OBJECT;

  ans = pango_layout_iter_at_last_line(object);

  _result = asRLogical(ans);

  return(_result);
}
 

USER_OBJECT_
S_pango_layout_iter_next_char(USER_OBJECT_ s_object)
{
  PangoLayoutIter* object = ((PangoLayoutIter*)getPtrValue(s_object));

  gboolean ans;
  USER_OBJECT_ _result = NULL_USER_OBJECT;

  ans = pango_layout_iter_next_char(object);

  _result = asRLogical(ans);

  return(_result);
}
 

USER_OBJECT_
S_pango_layout_iter_next_cluster(USER_OBJECT_ s_object)
{
  PangoLayoutIter* object = ((PangoLayoutIter*)getPtrValue(s_object));

  gboolean ans;
  USER_OBJECT_ _result = NULL_USER_OBJECT;

  ans = pango_layout_iter_next_cluster(object);

  _result = asRLogical(ans);

  return(_result);
}
 

USER_OBJECT_
S_pango_layout_iter_next_run(USER_OBJECT_ s_object)
{
  PangoLayoutIter* object = ((PangoLayoutIter*)getPtrValue(s_object));

  gboolean ans;
  USER_OBJECT_ _result = NULL_USER_OBJECT;

  ans = pango_layout_iter_next_run(object);

  _result = asRLogical(ans);

  return(_result);
}
 

USER_OBJECT_
S_pango_layout_iter_next_line(USER_OBJECT_ s_object)
{
  PangoLayoutIter* object = ((PangoLayoutIter*)getPtrValue(s_object));

  gboolean ans;
  USER_OBJECT_ _result = NULL_USER_OBJECT;

  ans = pango_layout_iter_next_line(object);

  _result = asRLogical(ans);

  return(_result);
}
 

USER_OBJECT_
S_pango_layout_iter_get_char_extents(USER_OBJECT_ s_object)
{
  PangoLayoutIter* object = ((PangoLayoutIter*)getPtrValue(s_object));

  USER_OBJECT_ _result = NULL_USER_OBJECT;
  PangoRectangle* logical_rect = ((PangoRectangle *)g_new0(PangoRectangle, 1));

  pango_layout_iter_get_char_extents(object, logical_rect);


  _result = retByVal(_result, "logical.rect", asRPangoRectangle(logical_rect), NULL);
  CLEANUP(g_free, logical_rect);

  return(_result);
}
 

USER_OBJECT_
S_pango_layout_iter_get_cluster_extents(USER_OBJECT_ s_object)
{
  PangoLayoutIter* object = ((PangoLayoutIter*)getPtrValue(s_object));

  USER_OBJECT_ _result = NULL_USER_OBJECT;
  PangoRectangle* ink_rect = ((PangoRectangle *)g_new0(PangoRectangle, 1));
  PangoRectangle* logical_rect = ((PangoRectangle *)g_new0(PangoRectangle, 1));

  pango_layout_iter_get_cluster_extents(object, ink_rect, logical_rect);


  _result = retByVal(_result, "ink.rect", asRPangoRectangle(ink_rect), "logical.rect", asRPangoRectangle(logical_rect), NULL);
  CLEANUP(g_free, ink_rect);
  CLEANUP(g_free, logical_rect);

  return(_result);
}
 

USER_OBJECT_
S_pango_layout_iter_get_run_extents(USER_OBJECT_ s_object)
{
  PangoLayoutIter* object = ((PangoLayoutIter*)getPtrValue(s_object));

  USER_OBJECT_ _result = NULL_USER_OBJECT;
  PangoRectangle* ink_rect = ((PangoRectangle *)g_new0(PangoRectangle, 1));
  PangoRectangle* logical_rect = ((PangoRectangle *)g_new0(PangoRectangle, 1));

  pango_layout_iter_get_run_extents(object, ink_rect, logical_rect);


  _result = retByVal(_result, "ink.rect", asRPangoRectangle(ink_rect), "logical.rect", asRPangoRectangle(logical_rect), NULL);
  CLEANUP(g_free, ink_rect);
  CLEANUP(g_free, logical_rect);

  return(_result);
}
 

USER_OBJECT_
S_pango_layout_iter_get_line_extents(USER_OBJECT_ s_object)
{
  PangoLayoutIter* object = ((PangoLayoutIter*)getPtrValue(s_object));

  USER_OBJECT_ _result = NULL_USER_OBJECT;
  PangoRectangle* ink_rect = ((PangoRectangle *)g_new0(PangoRectangle, 1));
  PangoRectangle* logical_rect = ((PangoRectangle *)g_new0(PangoRectangle, 1));

  pango_layout_iter_get_line_extents(object, ink_rect, logical_rect);


  _result = retByVal(_result, "ink.rect", asRPangoRectangle(ink_rect), "logical.rect", asRPangoRectangle(logical_rect), NULL);
  CLEANUP(g_free, ink_rect);
  CLEANUP(g_free, logical_rect);

  return(_result);
}
 

USER_OBJECT_
S_pango_layout_iter_get_line_yrange(USER_OBJECT_ s_object)
{
  PangoLayoutIter* object = ((PangoLayoutIter*)getPtrValue(s_object));

  USER_OBJECT_ _result = NULL_USER_OBJECT;
  int y0;
  int y1;

  pango_layout_iter_get_line_yrange(object, &y0, &y1);


  _result = retByVal(_result, "y0", asRInteger(y0), "y1", asRInteger(y1), NULL);

  return(_result);
}
 

USER_OBJECT_
S_pango_layout_iter_get_layout_extents(USER_OBJECT_ s_object)
{
  PangoLayoutIter* object = ((PangoLayoutIter*)getPtrValue(s_object));

  USER_OBJECT_ _result = NULL_USER_OBJECT;
  PangoRectangle* ink_rect = ((PangoRectangle *)g_new0(PangoRectangle, 1));
  PangoRectangle* logical_rect = ((PangoRectangle *)g_new0(PangoRectangle, 1));

  pango_layout_iter_get_layout_extents(object, ink_rect, logical_rect);


  _result = retByVal(_result, "ink.rect", asRPangoRectangle(ink_rect), "logical.rect", asRPangoRectangle(logical_rect), NULL);
  CLEANUP(g_free, ink_rect);
  CLEANUP(g_free, logical_rect);

  return(_result);
}
 

USER_OBJECT_
S_pango_layout_iter_get_baseline(USER_OBJECT_ s_object)
{
  PangoLayoutIter* object = ((PangoLayoutIter*)getPtrValue(s_object));

  int ans;
  USER_OBJECT_ _result = NULL_USER_OBJECT;

  ans = pango_layout_iter_get_baseline(object);

  _result = asRInteger(ans);

  return(_result);
}
 

USER_OBJECT_
S_pango_renderer_get_type(void)
{

  GType ans;
  USER_OBJECT_ _result = NULL_USER_OBJECT;

  ans = pango_renderer_get_type();

  _result = asRGType(ans);

  return(_result);
}
 

USER_OBJECT_
S_pango_renderer_draw_layout(USER_OBJECT_ s_object, USER_OBJECT_ s_layout, USER_OBJECT_ s_x, USER_OBJECT_ s_y)
{
  PangoRenderer* object = PANGO_RENDERER(getPtrValue(s_object));
  PangoLayout* layout = PANGO_LAYOUT(getPtrValue(s_layout));
  int x = ((int)asCInteger(s_x));
  int y = ((int)asCInteger(s_y));

  USER_OBJECT_ _result = NULL_USER_OBJECT;

  pango_renderer_draw_layout(object, layout, x, y);


  return(_result);
}
 

USER_OBJECT_
S_pango_renderer_draw_layout_line(USER_OBJECT_ s_object, USER_OBJECT_ s_line, USER_OBJECT_ s_x, USER_OBJECT_ s_y)
{
  PangoRenderer* object = PANGO_RENDERER(getPtrValue(s_object));
  PangoLayoutLine* line = ((PangoLayoutLine*)getPtrValue(s_line));
  int x = ((int)asCInteger(s_x));
  int y = ((int)asCInteger(s_y));

  USER_OBJECT_ _result = NULL_USER_OBJECT;

  pango_renderer_draw_layout_line(object, line, x, y);


  return(_result);
}
 

USER_OBJECT_
S_pango_renderer_draw_glyphs(USER_OBJECT_ s_object, USER_OBJECT_ s_font, USER_OBJECT_ s_glyphs, USER_OBJECT_ s_x, USER_OBJECT_ s_y)
{
  PangoRenderer* object = PANGO_RENDERER(getPtrValue(s_object));
  PangoFont* font = PANGO_FONT(getPtrValue(s_font));
  PangoGlyphString* glyphs = ((PangoGlyphString*)getPtrValue(s_glyphs));
  int x = ((int)asCInteger(s_x));
  int y = ((int)asCInteger(s_y));

  USER_OBJECT_ _result = NULL_USER_OBJECT;

  pango_renderer_draw_glyphs(object, font, glyphs, x, y);


  return(_result);
}
 

USER_OBJECT_
S_pango_renderer_draw_rectangle(USER_OBJECT_ s_object, USER_OBJECT_ s_part, USER_OBJECT_ s_x, USER_OBJECT_ s_y, USER_OBJECT_ s_width, USER_OBJECT_ s_height)
{
  PangoRenderer* object = PANGO_RENDERER(getPtrValue(s_object));
  PangoRenderPart part = ((PangoRenderPart)asCEnum(s_part, PANGO_TYPE_RENDER_PART));
  int x = ((int)asCInteger(s_x));
  int y = ((int)asCInteger(s_y));
  int width = ((int)asCInteger(s_width));
  int height = ((int)asCInteger(s_height));

  USER_OBJECT_ _result = NULL_USER_OBJECT;

  pango_renderer_draw_rectangle(object, part, x, y, width, height);


  return(_result);
}
 

USER_OBJECT_
S_pango_renderer_draw_error_underline(USER_OBJECT_ s_object, USER_OBJECT_ s_x, USER_OBJECT_ s_y, USER_OBJECT_ s_width, USER_OBJECT_ s_height)
{
  PangoRenderer* object = PANGO_RENDERER(getPtrValue(s_object));
  int x = ((int)asCInteger(s_x));
  int y = ((int)asCInteger(s_y));
  int width = ((int)asCInteger(s_width));
  int height = ((int)asCInteger(s_height));

  USER_OBJECT_ _result = NULL_USER_OBJECT;

  pango_renderer_draw_error_underline(object, x, y, width, height);


  return(_result);
}
 

USER_OBJECT_
S_pango_renderer_draw_trapezoid(USER_OBJECT_ s_object, USER_OBJECT_ s_part, USER_OBJECT_ s_y1_, USER_OBJECT_ s_x11, USER_OBJECT_ s_x21, USER_OBJECT_ s_y2, USER_OBJECT_ s_x12, USER_OBJECT_ s_x22)
{
  PangoRenderer* object = PANGO_RENDERER(getPtrValue(s_object));
  PangoRenderPart part = ((PangoRenderPart)asCEnum(s_part, PANGO_TYPE_RENDER_PART));
  double y1_ = ((double)asCNumeric(s_y1_));
  double x11 = ((double)asCNumeric(s_x11));
  double x21 = ((double)asCNumeric(s_x21));
  double y2 = ((double)asCNumeric(s_y2));
  double x12 = ((double)asCNumeric(s_x12));
  double x22 = ((double)asCNumeric(s_x22));

  USER_OBJECT_ _result = NULL_USER_OBJECT;

  pango_renderer_draw_trapezoid(object, part, y1_, x11, x21, y2, x12, x22);


  return(_result);
}
 

USER_OBJECT_
S_pango_renderer_draw_glyph(USER_OBJECT_ s_object, USER_OBJECT_ s_font, USER_OBJECT_ s_glyph, USER_OBJECT_ s_x, USER_OBJECT_ s_y)
{
  PangoRenderer* object = PANGO_RENDERER(getPtrValue(s_object));
  PangoFont* font = PANGO_FONT(getPtrValue(s_font));
  PangoGlyph glyph = ((PangoGlyph)asCNumeric(s_glyph));
  double x = ((double)asCNumeric(s_x));
  double y = ((double)asCNumeric(s_y));

  USER_OBJECT_ _result = NULL_USER_OBJECT;

  pango_renderer_draw_glyph(object, font, glyph, x, y);


  return(_result);
}
 

USER_OBJECT_
S_pango_renderer_activate(USER_OBJECT_ s_object)
{
  PangoRenderer* object = PANGO_RENDERER(getPtrValue(s_object));

  USER_OBJECT_ _result = NULL_USER_OBJECT;

  pango_renderer_activate(object);


  return(_result);
}
 

USER_OBJECT_
S_pango_renderer_deactivate(USER_OBJECT_ s_object)
{
  PangoRenderer* object = PANGO_RENDERER(getPtrValue(s_object));

  USER_OBJECT_ _result = NULL_USER_OBJECT;

  pango_renderer_deactivate(object);


  return(_result);
}
 

USER_OBJECT_
S_pango_renderer_part_changed(USER_OBJECT_ s_object, USER_OBJECT_ s_part)
{
  PangoRenderer* object = PANGO_RENDERER(getPtrValue(s_object));
  PangoRenderPart part = ((PangoRenderPart)asCEnum(s_part, PANGO_TYPE_RENDER_PART));

  USER_OBJECT_ _result = NULL_USER_OBJECT;

  pango_renderer_part_changed(object, part);


  return(_result);
}
 

USER_OBJECT_
S_pango_renderer_set_color(USER_OBJECT_ s_object, USER_OBJECT_ s_part, USER_OBJECT_ s_color)
{
  PangoRenderer* object = PANGO_RENDERER(getPtrValue(s_object));
  PangoRenderPart part = ((PangoRenderPart)asCEnum(s_part, PANGO_TYPE_RENDER_PART));
  const PangoColor* color = ((const PangoColor*)getPtrValue(s_color));

  USER_OBJECT_ _result = NULL_USER_OBJECT;

  pango_renderer_set_color(object, part, color);


  return(_result);
}
 

USER_OBJECT_
S_pango_renderer_get_color(USER_OBJECT_ s_object, USER_OBJECT_ s_part)
{
  PangoRenderer* object = PANGO_RENDERER(getPtrValue(s_object));
  PangoRenderPart part = ((PangoRenderPart)asCEnum(s_part, PANGO_TYPE_RENDER_PART));

  PangoColor* ans;
  USER_OBJECT_ _result = NULL_USER_OBJECT;

  ans = pango_renderer_get_color(object, part);

  _result = toRPointerWithFinalizer(ans ? pango_color_copy(ans) : NULL, "PangoColor", (RPointerFinalizer) pango_color_free);

  return(_result);
}
 

USER_OBJECT_
S_pango_renderer_set_matrix(USER_OBJECT_ s_object, USER_OBJECT_ s_matrix)
{
  PangoRenderer* object = PANGO_RENDERER(getPtrValue(s_object));
  const PangoMatrix* matrix = ((const PangoMatrix*)getPtrValue(s_matrix));

  USER_OBJECT_ _result = NULL_USER_OBJECT;

  pango_renderer_set_matrix(object, matrix);


  return(_result);
}
 

USER_OBJECT_
S_pango_renderer_get_matrix(USER_OBJECT_ s_object)
{
  PangoRenderer* object = PANGO_RENDERER(getPtrValue(s_object));

  const PangoMatrix* ans;
  USER_OBJECT_ _result = NULL_USER_OBJECT;

  ans = pango_renderer_get_matrix(object);

  _result = toRPointer(ans ? pango_matrix_copy(ans) : NULL, "PangoMatrix");

  return(_result);
}
 

USER_OBJECT_
S_pango_tab_array_new(USER_OBJECT_ s_initial_size, USER_OBJECT_ s_positions_in_pixels)
{
  gint initial_size = ((gint)asCInteger(s_initial_size));
  gboolean positions_in_pixels = ((gboolean)asCLogical(s_positions_in_pixels));

  PangoTabArray* ans;
  USER_OBJECT_ _result = NULL_USER_OBJECT;

  ans = pango_tab_array_new(initial_size, positions_in_pixels);

  _result = toRPointerWithFinalizer(ans ? pango_tab_array_copy(ans) : NULL, "PangoTabArray", (RPointerFinalizer) pango_tab_array_free);

  return(_result);
}
 

USER_OBJECT_
S_pango_tab_array_get_type(void)
{

  GType ans;
  USER_OBJECT_ _result = NULL_USER_OBJECT;

  ans = pango_tab_array_get_type();

  _result = asRGType(ans);

  return(_result);
}
 

USER_OBJECT_
S_pango_tab_array_copy(USER_OBJECT_ s_object)
{
  PangoTabArray* object = ((PangoTabArray*)getPtrValue(s_object));

  PangoTabArray* ans;
  USER_OBJECT_ _result = NULL_USER_OBJECT;

  ans = pango_tab_array_copy(object);

  _result = toRPointerWithFinalizer(ans ? pango_tab_array_copy(ans) : NULL, "PangoTabArray", (RPointerFinalizer) pango_tab_array_free);

  return(_result);
}
 

USER_OBJECT_
S_pango_tab_array_free(USER_OBJECT_ s_object)
{
  PangoTabArray* object = ((PangoTabArray*)getPtrValue(s_object));

  USER_OBJECT_ _result = NULL_USER_OBJECT;

  pango_tab_array_free(object);


  return(_result);
}
 

USER_OBJECT_
S_pango_tab_array_get_size(USER_OBJECT_ s_object)
{
  PangoTabArray* object = ((PangoTabArray*)getPtrValue(s_object));

  gint ans;
  USER_OBJECT_ _result = NULL_USER_OBJECT;

  ans = pango_tab_array_get_size(object);

  _result = asRInteger(ans);

  return(_result);
}
 

USER_OBJECT_
S_pango_tab_array_resize(USER_OBJECT_ s_object, USER_OBJECT_ s_new_size)
{
  PangoTabArray* object = ((PangoTabArray*)getPtrValue(s_object));
  gint new_size = ((gint)asCInteger(s_new_size));

  USER_OBJECT_ _result = NULL_USER_OBJECT;

  pango_tab_array_resize(object, new_size);


  return(_result);
}
 

USER_OBJECT_
S_pango_tab_array_set_tab(USER_OBJECT_ s_object, USER_OBJECT_ s_tab_index, USER_OBJECT_ s_alignment, USER_OBJECT_ s_location)
{
  PangoTabArray* object = ((PangoTabArray*)getPtrValue(s_object));
  gint tab_index = ((gint)asCInteger(s_tab_index));
  PangoTabAlign alignment = ((PangoTabAlign)asCEnum(s_alignment, PANGO_TYPE_TAB_ALIGN));
  gint location = ((gint)asCInteger(s_location));

  USER_OBJECT_ _result = NULL_USER_OBJECT;

  pango_tab_array_set_tab(object, tab_index, alignment, location);


  return(_result);
}
 

USER_OBJECT_
S_pango_tab_array_get_tab(USER_OBJECT_ s_object, USER_OBJECT_ s_tab_index)
{
  PangoTabArray* object = ((PangoTabArray*)getPtrValue(s_object));
  gint tab_index = ((gint)asCInteger(s_tab_index));

  USER_OBJECT_ _result = NULL_USER_OBJECT;
  PangoTabAlign alignment;
  gint location;

  pango_tab_array_get_tab(object, tab_index, &alignment, &location);


  _result = retByVal(_result, "alignment", asREnum(alignment, PANGO_TYPE_TAB_ALIGN), "location", asRInteger(location), NULL);

  return(_result);
}
 

USER_OBJECT_
S_pango_tab_array_get_positions_in_pixels(USER_OBJECT_ s_object)
{
  PangoTabArray* object = ((PangoTabArray*)getPtrValue(s_object));

  gboolean ans;
  USER_OBJECT_ _result = NULL_USER_OBJECT;

  ans = pango_tab_array_get_positions_in_pixels(object);

  _result = asRLogical(ans);

  return(_result);
}
 

USER_OBJECT_
S_pango_language_from_string(USER_OBJECT_ s_language)
{
  const char* language = ((const char*)asCString(s_language));

  PangoLanguage* ans;
  USER_OBJECT_ _result = NULL_USER_OBJECT;

  ans = pango_language_from_string(language);

  _result = toRPointer(ans ? (ans) : NULL, "PangoLanguage");

  return(_result);
}
 

USER_OBJECT_
S_pango_language_matches(USER_OBJECT_ s_object, USER_OBJECT_ s_range_list)
{
  PangoLanguage* object = ((PangoLanguage*)getPtrValue(s_object));
  const char* range_list = ((const char*)asCString(s_range_list));

  gboolean ans;
  USER_OBJECT_ _result = NULL_USER_OBJECT;

  ans = pango_language_matches(object, range_list);

  _result = asRLogical(ans);

  return(_result);
}
 

USER_OBJECT_
S_pango_language_to_string(USER_OBJECT_ s_object)
{
  PangoLanguage* object = ((PangoLanguage*)getPtrValue(s_object));

  const char* ans;
  USER_OBJECT_ _result = NULL_USER_OBJECT;

  ans = pango_language_to_string(object);

  _result = asRString(ans);

  return(_result);
}
 

USER_OBJECT_
S_PANGO_PIXELS(USER_OBJECT_ s_size)
{
  gint size = ((gint)asCInteger(s_size));

  gint ans;
  USER_OBJECT_ _result = NULL_USER_OBJECT;

  ans = PANGO_PIXELS(size);

  _result = asRInteger(ans);

  return(_result);
}
 

USER_OBJECT_
S_pango_cairo_show_error_underline(USER_OBJECT_ s_cr, USER_OBJECT_ s_x, USER_OBJECT_ s_y, USER_OBJECT_ s_width, USER_OBJECT_ s_height)
{
  cairo_t* cr = ((cairo_t*)getPtrValue(s_cr));
  double x = ((double)asCNumeric(s_x));
  double y = ((double)asCNumeric(s_y));
  double width = ((double)asCNumeric(s_width));
  double height = ((double)asCNumeric(s_height));

  USER_OBJECT_ _result = NULL_USER_OBJECT;

  pango_cairo_show_error_underline(cr, x, y, width, height);


  return(_result);
}
 

USER_OBJECT_
S_pango_cairo_error_underline_path(USER_OBJECT_ s_cr, USER_OBJECT_ s_x, USER_OBJECT_ s_y, USER_OBJECT_ s_width, USER_OBJECT_ s_height)
{
  cairo_t* cr = ((cairo_t*)getPtrValue(s_cr));
  double x = ((double)asCNumeric(s_x));
  double y = ((double)asCNumeric(s_y));
  double width = ((double)asCNumeric(s_width));
  double height = ((double)asCNumeric(s_height));

  USER_OBJECT_ _result = NULL_USER_OBJECT;

  pango_cairo_error_underline_path(cr, x, y, width, height);


  return(_result);
}
 

USER_OBJECT_
S_pango_font_describe_with_absolute_size(USER_OBJECT_ s_object)
{
  PangoFont* object = PANGO_FONT(getPtrValue(s_object));

  PangoFontDescription* ans;
  USER_OBJECT_ _result = NULL_USER_OBJECT;

  ans = pango_font_describe_with_absolute_size(object);

  _result = toRPointerWithFinalizer(ans ? pango_font_description_copy(ans) : NULL, "PangoFontDescription", (RPointerFinalizer) pango_font_description_free);

  return(_result);
}
 

USER_OBJECT_
S_pango_glyph_string_get_width(USER_OBJECT_ s_object)
{
  PangoGlyphString* object = ((PangoGlyphString*)getPtrValue(s_object));

  int ans;
  USER_OBJECT_ _result = NULL_USER_OBJECT;

  ans = pango_glyph_string_get_width(object);

  _result = asRInteger(ans);

  return(_result);
}
 

USER_OBJECT_
S_pango_matrix_get_font_scale_factor(USER_OBJECT_ s_object)
{
  PangoMatrix* object = ((PangoMatrix*)getPtrValue(s_object));

  double ans;
  USER_OBJECT_ _result = NULL_USER_OBJECT;

  ans = pango_matrix_get_font_scale_factor(object);

  _result = asRNumeric(ans);

  return(_result);
}
 

USER_OBJECT_
S_pango_layout_index_to_line_x(USER_OBJECT_ s_object, USER_OBJECT_ s_index_, USER_OBJECT_ s_trailing)
{
  PangoLayout* object = PANGO_LAYOUT(getPtrValue(s_object));
  int index_ = ((int)asCInteger(s_index_));
  gboolean trailing = ((gboolean)asCLogical(s_trailing));

  USER_OBJECT_ _result = NULL_USER_OBJECT;
  int line;
  int x_pos;

  pango_layout_index_to_line_x(object, index_, trailing, &line, &x_pos);


  _result = retByVal(_result, "line", asRInteger(line), "x.pos", asRInteger(x_pos), NULL);

  return(_result);
}
 

