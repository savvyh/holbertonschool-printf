#include "main.h"
#include <stdarg.h>
#include <stdlib.h>
/**
 * function_int_analyser - analyse the input string_final and
 *						guide to the good function
 *
 * Description: Function that move into strin_final and search an occurrence
 *				with a format %d or %i. When it's a match, the function
 *				move to the good function format_function.
 *
 * @string_final: Receive a new_string without the specifier %d, %i.
 * @args_value: The list of arguments received by function _printf.
 *
 * Return: return string_final with argument that replace the format specifier.
*/

char *function_int_analyser(char *string_final, va_list args_value)
{
	int index = 0;

	while (string_final[index])
	{
		if (string_final[index] == '%')
		{
			if (string_final[index + 1] == 'd')
			{
				int entier = va_arg(args_value, int);

				string_final = format_entier(string_final, entier);
			}
			if (string_final[index + 1] == 'i')
			{
				int entier = va_arg(args_value, int);

				string_final = format_entier2(string_final, entier);
			}
		}
		index++;
	}
	string_final[index] = '\0';
	return (string_final);
}
