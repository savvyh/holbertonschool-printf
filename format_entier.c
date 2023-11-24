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
 * @argument: The character to add to the string inside format.
 *
 * Return: The string which is the modified format string.
*/

char *format_entier(char *string_final, long int entier)
{
	int format_length = _strlen((char *)string_final);
	char *str = _itoa(entier);
	int argument_length = _strlen(str);
	int result_length = format_length + argument_length;
	int index_format;
	int index_argument;
	int index_result = 0;
	int stop = 0;

	char *string_return;

	string_return = malloc(sizeof(char) * (result_length + 1));

	if (string_return == NULL)
		return (NULL);

	for (index_format = 0; index_format < format_length; index_format++)
	{
		if (string_final[index_format] == '%' && string_final[index_format + 1] == 'd' && stop != 1)
		{
			for (index_argument = 0; index_argument < argument_length; index_argument++)
			{
				string_return[index_result++] = str[index_argument];
			}
			index_format++;
			stop = 1;
		}
		else
			string_return[index_result++] = string_final[index_format];
	}

	string_return[index_result] = '\0';
	free(str);
	return (string_return);
}
