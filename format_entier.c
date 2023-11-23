#include "main.h"
#include <stdlib.h>
/**
 * format_entier - function to print an int when it match with %d.
 *
 * Description: Print an integer when it match with %,
 *				follow by the character 'd'.
 *				If it match with %d, then it replaces by the variable 'argument'.
 *
 * @string_final: input of a string in format and
 *				  become the new string with modification.
 * @entier: The integer to add to the string inside format.
 *
 * Return: The string which is the modified format string.
*/

char *format_entier(char *string_final, int entier)
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
		if (string_final[index_format] == '%' &&
			string_final[index_format + 1] == 'd' && stop != 1)
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
