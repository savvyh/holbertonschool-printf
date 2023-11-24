#include <stdio.h>
#include <stdlib.h>

/**
 * _itoa - function similar to the real function itoa
 *
 * Description: the aim of this function is to convert int to char
 *
 * @value: the value to convert
 *
 * Return: the result of the convertion int to char
*/
char *_itoa(long int value)
{
	long int n = labs(value);
	int num_digits = 1 + (value < 0);
	char *result = (char *)malloc((num_digits + 1) * sizeof(char));

	if (result == NULL)
	{
		return (NULL);
	}

	while (n >= 10)
	{
		n /= 10;
		num_digits++;
	}


	n = labs(value);
	result[num_digits] = '\0';
	while (num_digits--)
	{
		result[num_digits] = (n % 10) + '0';
		n /= 10;
	}

	if (value < 0)
	{
		result[0] = '-';
	}
	return (result);
}
