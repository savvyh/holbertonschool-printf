#include "main.h"
#include <stdio.h>
#include <stdarg.h>

int _printf(const char *format, ...)
{
	va_list args; // create list of arg
	va_start (args, format); // initialize list
	char *string_final = NULL; // create string_final (we print this string)
	int entier_arg = va_arg(args, int); // create list of arg integer ( argument int)
	char* chaine_arg = va_arg(args, char*); // create list of arg string & character .
	int nbre_byte = 0;

	string_final = malloc(sizeof(format) + sizeof(args)); // alloc full mémory for string

	string_final = function_analyser(format ,string_final, *chaine_arg); // ##rejouter un arg ici## change %c / %s et %%
	string_final = function_analyser_int(format, string_final, entier_arg); // change %d and %i .

	for (nbre_byte = 0;string_final[nbre_byte]; nbre_byte++) // print the string and countthe byte .
	{
		_putchar(string_final[nbre_byte]);
	}
	_putchar('\0');
	return (nbre_byte); // return the number of byte
}
// sur le papier sa a l'air bon mais j'ai pas test.
