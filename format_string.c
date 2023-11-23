#include "main.h"
#include <stdlib.h>
/**
 * format_string - Replace the string %s within format, with argument.
 *
 * Description: this function searches all occurrence of the string %s
 *				within the 'format' string and replace with the 'argument' string.
 *
 * @format: A string which contains the specifier %s to replace it.
 * @str: The string that replace the %s.
 *
 * Return: A new string where all %s occurrences have been replaced
 *			by the value of 'argument'
*/
char *format_string(char *string_final, char *str)
{
	int format_length = _strlen((char *)string_final);
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
		if (string_final[index_format] == '%' && string_final[index_format + 1] == 's' && stop != 1)
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
	return (string_return);
}
