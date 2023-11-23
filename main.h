#ifndef __PRINTF__
#define __PRINTF__
#include <stdarg.h>

int _strlen(char *string);
char *format_char(const char *format, char ch);
char *function_analyser(const char *format, char *string_final,
						va_list args_value);
char *format_percent(const char *format);
char *format_string(const char *format, char *str);
int _putchar(char c);
int _printf(const char *format, ...);

#endif
