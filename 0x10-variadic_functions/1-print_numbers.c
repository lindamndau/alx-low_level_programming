#include "variadic_functions.h"
#include <stdio.h>
/**
 * This function prints numbers, followed by a new line.
 * @seperator  is the string to be printed between numbers
 * @n n is the number of integers passed to the function
 * If separator is NULL, functions doesnt print
 *
 *
 *
 *
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ag;

	va_start(ag, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ag, int));
		if (i < (n - 1) && separator)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(ag);
}
