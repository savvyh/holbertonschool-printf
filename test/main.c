#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char *string = "il fait %c";

	printf("%s\n", string);
	string = print_char(string, 'b');
	printf("%s\n", string);
	printf("%%\n");
	free(string);
	return (0);
}
