#include "main.h"
#include <stdlib.h>

/**
 * print_char - function to print a character when it match witch the symbol %
 *				follow by the character 'c'.
 *				If it match with %c, then it replaces by the variable 'argument'.
 *
 * @format: The input: a type of data we need to print.
 * @argument: The character to add to the string inside format.
 *
 * Return: The string which is the modified format string.
*/

char *print_char(const char *format, char argument)
{
	char *string_return = NULL;
	int index;
	int stop = 0;
	int lenght_argument = 1;

	string_return = malloc(sizeof(format) + (lenght_argument - 2));

	if (string_return == NULL)
	{
		return (NULL);
	}
	
	for (index = 0; format[index]; index++)
	{
		if (format[index] == '%' && stop != 1)
		{
			string_return[index] = argument;
			index++;
			stop = 1;
		}
		else
		{
			string_return[index] = format[index];
		}
	}
	return (string_return);
}
