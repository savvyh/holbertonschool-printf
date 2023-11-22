#include "main.h"
#include <stdarg.h>
#include <stdlib.h>
/**
 * function_analyser - analyse the input format and guide to the good function
 *
 * Description: Function that move into format and search an occurrence
 *				with a format %% ou %s ou %c. when it's a match, the function
 *				move to the good function format_function.
 *
 * @format: The input, a string with a format specifier.
 * @string_final: Receive a new_string without the specifier %%, %s or %c
 * @arguments: The string that replace the specifier %%, %s or %c
 *
 * Return: a new_string with argument that replace the format specifier
*/
char *function_analyser(const char *format, char *string_final, char arguments)
{
	int index = 0;

	while (format[index])
	{
		string_final[index] = format[index];
		index++;
	}

	for (index = 0; format[index]; index++)
	{
		if (string_final[index] == '%')
		{
			if (string_final[index + 1] == 'c')
			{
				string_final = format_char(format, arguments);
				index = 0;
			}
			if (string_final[index + 1] == 's')
			{
				string_final = format_string(format, arguments);
				index = 0;
			}
			if (string_final[index + 1] == '%')
			{
				string_final = format_percent(format);
				index = 0;
			}
		}
	}
	return (string_final);
}
