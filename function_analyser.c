#include "main.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

char *function_analyser(const char* format, char *string_final, char arguments)
{
	int index = 0;

	for (index = 0; format[index]; index++)
	{
		if (format[index] == '%')
		{
			if (format[index + 1] == 'c')
			{
				string_final = format_char(format,arguments);
			}
			if (format[index + 1] == 's')
			{
				/*string_final = print_string(format,arguments);*/
				printf("youpi");
			}
			if (format[index + 1] == '%')
			{
				/*string_final = print_percentage(format,arguments);*/
				printf("zougi");
			}
		}
	}
	return (string_final);
}
