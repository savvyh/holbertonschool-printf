#include <stdio.h>
#include <stdlib.h>

#include <stdlib.h>

char* _itoa(int value)
{
    int n = abs(value);
    int num_digits = 1 + (value < 0);
	   char* result = (char*)malloc((num_digits + 1) * sizeof(char));

	if (result == NULL)
	{
        return NULL;
    }

    while (n >= 10) {
        n /= 10;
        num_digits++;
    }

    n = abs(value);
    result[num_digits] = '\0';
    while (num_digits--) {
        result[num_digits] = (n % 10) + '0';
        n /= 10;
    }

    if (value < 0) {
        result[0] = '-';
    }
    return result;
}
