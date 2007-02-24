#include "RGtk2/cairoUserFuncs.h"

cairo_status_t
S_cairo_write_func_t(gpointer s_closure, const guchar* s_data, guint s_length)
{
  USER_OBJECT_ e;
  USER_OBJECT_ tmp;
  USER_OBJECT_ s_ans;
  gint err;

  PROTECT(e = allocVector(LANGSXP, 4));
  tmp = e;

  SETCAR(tmp, ((R_CallbackData *)s_closure)->function);
  tmp = CDR(tmp);

  SETCAR(tmp, asRRawArrayWithSize(s_data, s_length));
  tmp = CDR(tmp);
  SETCAR(tmp, asRNumeric(s_length));
  tmp = CDR(tmp);
  SETCAR(tmp, ((R_CallbackData *)s_closure)->data);
  tmp = CDR(tmp);

  s_ans = R_tryEval(e, R_GlobalEnv, &err);
  if(err)
    return(((cairo_status_t)0));

  UNPROTECT(1);
  return(((cairo_status_t)asCEnum(s_ans, CAIRO_TYPE_STATUS)));
} 

