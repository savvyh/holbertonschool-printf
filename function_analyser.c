#include "main.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * function_analyser - analyse the input format and guide to the good function
 *
 * Description: Function that move into format and search an occurrence
 *				with a format %% ou %s ou %c. when it's a match, the function
 *				move to the good function format_function.
 *
 * @format: The input, a string with a format specifier.
 * @string_final: Receive a new_string without the specifier %%, %s or %c
 * @args_value: The list of arguments received by function _printf.
 *
 * Return: a new_string with argument that replace the format specifier
*/
char *function_analyser(const char *format, char *string_final,
						 va_list args_value)
{
	int index = 0;

	for (index = 0; format[index]; index++)
		string_final[index] = format[index];
	index = 0;
	while (string_final[index])
	{
		if (string_final[index] == '%')
		{
			if (string_final[index + 1] == '%')
			{
				string_final = format_percent(string_final);
			}
			if (string_final[index + 1] == 'c')
			{
				int ch = va_arg(args_value, int);
				
				string_final = format_char(string_final, ch);
			}
			if (string_final[index + 1] == 's')
			{
				char *str = va_arg(args_value, char *);

				if (str == NULL)
					str = "(null)";
				string_final = format_string(string_final, str);
			}
		}
		index++;
	}
	string_final[index] = '\0';
	return (string_final);
}
