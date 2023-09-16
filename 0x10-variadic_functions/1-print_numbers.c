#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * This function prints numbers, followed by a new line.
 * where separator is the string to be printed between numbers
 * and n is the number of integers passed to the function
 * if separator is null, doesnt print
 * prints a new line at the end of function.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;

	va_start(valist, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(valist, int));
		if (separator && i < n - 1)
			printf("%s", separator);
	}

	printf("\n");
	va_end(valist);
}
