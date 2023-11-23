#include "main.h"
#include <stdlib.h>

/**
 * format_char - function to print a character when it match with %c.
 *
 * Description: Print a character when it match with %,
 *				follow by the character 'c'.
 *				If it match with %c, then it replaces by the variable 'argument'.
 *
 * @format: The input, a string.
 * @ch: The character to add to the string inside format.
 *
 * Return: The string which is the modified format string.
*/

char *format_char(char *format, char ch)
{
	char *string_return = NULL;
	int index = 0;
	int result_index = 0;
	int stop = 0;

	int lenght_format = _strlen((char *)format);
	int lenght_argument = 1;

	string_return = malloc(sizeof(char) * (lenght_format + lenght_argument) + 1);

	if (string_return == NULL)
		return (NULL);

	while (format[index])
	{
		if (format[index] == '%' && format[index + 1] == 'c' && stop != 1)
		{
			string_return[result_index] = ch;
			index++;
			stop = 1;
		}
		else
		{
			string_return[result_index] = format[index];
		}
		index++;
		result_index++;
	}
	string_return[result_index] = '\0';
	return (string_return);
}
