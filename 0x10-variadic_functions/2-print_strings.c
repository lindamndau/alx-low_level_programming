#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * This function prints strings, and a new line.
 * where separator is the string to be printed between the strings
 * and n is the number of strings passed to the function
 * printf is used
 * if separator is null, serparator isnt printed
 * If one of the string is NULL, print (nil) instead
 * Print a new line at the end of your function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	char *str;
	unsigned int index;

	va_start(strings, n);
	for (index = 0; index < n; index++)
	{
		str = va_arg(strings, char *);
		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}
		if (index != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(strings);
}
