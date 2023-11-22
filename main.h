#ifndef __PRINTF__
#define __PRINTF__

int _strlen(char *string);
char *format_char(const char *format, char argument);
char *function_analyser(const char *format, char *string_final,
						char arguments);
char *format_percent(const char *format);
char *format_string(const char *format, char *argument);

#endif
