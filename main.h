#ifndef __PRINTF__
#define __PRINTF__

int _strlen(char *string);
char *print_char(const char *format, char argument);
char *replace_string(char *format, char *argument);
char *replace_percent(char *format);

#endif
