#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <unistd.h>


/* print_functions.c module */
int print_char(va_list ap, params_t *params);
int print_string(va_list ap, params_t *params);
int print_percent(va_list ap, params_t *params);



/* _prinf.c module */
int _printf(const char *format, ...);

#endif
