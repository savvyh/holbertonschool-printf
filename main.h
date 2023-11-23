#ifndef __PRINTF__
#define __PRINTF__
#include <stdarg.h>
#include <stdlib.h>

int _strlen(char *string);
char *format_char(char *format, char ch);
char *function_analyser(const char *format, char *string_final,
						va_list args_value);
char *format_percent(char *format);
char *format_string(char *format, char *str);
int _putchar(char c);
int _printf(const char *format, ...);
char *function_int_analyser(char *string_final,
							 va_list args_value);
int _atoi(char *s);
char *format_entier2(char *string_final, int entier);
char *format_entier(char *string_final, int entier);
char *_itoa(int value);
#endif
