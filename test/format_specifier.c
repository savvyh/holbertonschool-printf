#include "main.h"
#include <unistd.h>
#include <stdarg.h>

/**
 * print_a_char - function to print only one character
 *
 * Description: this function is use to be call in other function
 *				when you need to print only one char
 *
 * @format: A string which contains the specifier %c to replace it
 * @argument: The character to add to the string inside format.
 *
 * Return: 1 if the function is successful
*/
int print_a_char(char *format, va_list argument)
{
	char c = va_arg(argument, int);

	write(1, &c, 1);
	return (1);
}

/**
 * print_a_string - function to print a string of character
 *
 * Description: this function is use to be call in other function
 *				when you need to print a string
 *
 * @format: A string which contains the specifier %s to replace it
 * @argument: The character to add to the string inside format.
 *
 * Return: 1 if the function is successful
 *			or -1 if the string is null
*/
int print_a_string(char *format, va_list argument)
{
	char *string = va_arg(argument, char *);
	int index_string;

	if (string == NULL)
	{
		return (-1);
	}

	for (index_string = 0; string[index_string] != '\0'; index_string++)
	{
		write(1, &string[index_string], 1);
	}
	return (1);
}

/**
 * print_a_percent - function to print a % when format is %%
 *
 * Description: this function is use to be call in other function
 *				when the function will match with two %%.
 *
 * @format: A string which contains the specifier %% to replace it by a %
 *
 * Return: 1 if the function is successful
*/
int print_a_percent(char *format)
{
	write(1, "%", 1);
	return (1);
}
