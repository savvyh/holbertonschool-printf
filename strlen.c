#include "main.h"
/**
 * _strlen - count the lenght of the input string
 *
 * @string : string input in my function.
 *
 * Return: lenght of the string without the NULL character.
 */

int _strlen(char *string)
{
	int lenght = 0;

	while (*string != '\0')
	{
		string++;
		lenght++;
	}
	return (lenght);
}
