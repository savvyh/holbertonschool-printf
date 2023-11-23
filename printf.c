#include "main.h"
#include <stdarg.h>
#include <stdlib.h>

/**
 * _printf - the personalised function printf.
 *
 * Description: This function has to at the end print number of character
 *				and produces the output according to a format.
 *				This function call other function to go at the aim.
 *
 * @format: Thje input, a string with a format specifier.
 *
 * Return: number of byte and a new string (the modified format).
*/
int _printf(const char *format, ...)
{
	int index = 0;
	char *string_final;
	int nbre_byte = 0;
	va_list args_value;

	string_final = malloc(8000);

	if (string_final == NULL)
	{
		free(string_final);
		exit(1);
	}

	va_start(args_value, format);

	while (format[index])
	{
		string_final[index] = format[index];
		index++;
	}

	string_final = function_analyser(format, string_final, args_value);

	for (nbre_byte = 0; string_final[nbre_byte]; nbre_byte++)
	{
		_putchar(string_final[nbre_byte]);
	}
	_putchar('\0');
	va_end(args_value);
	free(string_final);
	return (nbre_byte);
}
