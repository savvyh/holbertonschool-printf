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
	int change = 0;
	va_list args_value;

	va_start(args_value, format);

	string_final = malloc(4000);

	if (string_final == NULL)
	{
		free(string_final);
		return (-1);
	}

	while (format[index])
	{
		string_final[index] = format[index];
		index++;
	}
	if (change != 1)
	{
		string_final = function_analyser(format, string_final, args_value);
		change = 1;
	}
	if (change == 1)
		string_final = function_int_analyser(string_final, args_value);

	for (nbre_byte = 0; string_final[nbre_byte]; nbre_byte++)
	{
		_putchar(string_final[nbre_byte]);
	}
	va_end(args_value);
	free(string_final);
	return (nbre_byte);
}
