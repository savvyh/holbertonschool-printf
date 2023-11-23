#include "main.h"
#include <stdlib.h>
/**
 * format_percent - Replace the symbol % follow by a % by another %
 *
 * Description: this function searches all occurrence of the string %%
 *				within 'format' and if it match with a symbol %% it will be replace by %
 *
 * @format: A string which contains the specifier %% to replace it
 *
 * Return: a new string with the null byte
*/
char *format_percent(const char *format)
{
	int format_length = _strlen((char *)format);
	char *new_string;
	int index_format = 0;
	int index_new_string = 0;
	int stop = 0;

	new_string = malloc(format_length + 1);

	if (new_string == NULL)
	{
		return (NULL);
	}

	for (index_format = 0; index_format < format_length; index_format++)
	{
		if (format[index_format] == '%' && stop != 1)
		{
			new_string[index_new_string++] = '%';
			index_format++;
			stop = 1;
		}
		else
		{
			new_string[index_new_string++] = format[index_format];
		}
	}
	new_string[index_new_string] = '\0';

	return (new_string);
}
