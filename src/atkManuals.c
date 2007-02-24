#include "RGtk2/atk.h"


/* reason: discard text length parameter and handle in-out position
	it's probably too much trouble to add automatic in-out support, especially
	because it only affects primitive types
	- why couldn't they just return that by value? */
USER_OBJECT_
S_atk_editable_text_insert_text(USER_OBJECT_ s_object, USER_OBJECT_ s_string, USER_OBJECT_ s_position)
{
        AtkEditableText* object = ATK_EDITABLE_TEXT(getPtrValue(s_object));
        const gchar* string = (const gchar*)asCString(s_string);
        gint* position = (gint*)asCArray(s_position, gint, asCInteger);
		gint length = strlen(string);
        USER_OBJECT_ _result = NULL_USER_OBJECT;

        atk_editable_text_insert_text(object, string, length, position);

		_result = retByVal(_result, "position", asRInteger(*position), NULL);
        return(_result);
}

/* This function is not provided in the win32 build of the library */
#ifdef WIN32
void
atk_text_free_ranges (AtkTextRange **ranges)
{
  AtkTextRange **first = ranges;

  if (ranges)
    {
      while (*ranges)
        {
          AtkTextRange *range;

          range = *ranges;
          *ranges++;
          g_free (range->content);
          g_free (range);
        }
      g_free (first);
    }
}
#endif
