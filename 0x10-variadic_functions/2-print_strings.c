#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * This function prints strings, followed by a new line.
 * @*s points to array of strings
 * @separator - is the string to be printed between the strings
 * @n - is the number of strings passed to the function
 * If separator is NULL, doesnt print
 * Print nil if one string is NULL
 * New line at end of function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *s;
	va_list ag;
	va_start(ag, n);
	for(i = 0; i < n; i++)
	{
		s = va_arg(ag, char *);
		
		if(separator != NULL && i > 0)
		{
			printf("%s", separator);
		}
		if(s == NULL)
		{
			printf("(nil)");
		}
		else
			printf("%s", s);
	}
	va_end(ag);
	printf("\n");
}
