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

char *function_int_analyser(char *string_final, va_list args_value)
 {
	int index = 0;

	while(string_final[index])
	{
		if(string_final[index] == '%')
		{
			if(string_final[index + 1] == 'd')
			{
				long int entier = va_arg(args_value, int);

				string_final = format_entier(string_final, entier);
			}
			if(string_final[index + 1] == 'i')
			{
				long int entier = va_arg(args_value, int);

				string_final = format_entier2(string_final, entier);
			}
		}
		index++;
	}
	string_final[index] = '\0';
	return (string_final);
 }
