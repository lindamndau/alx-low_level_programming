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
	va_list nums;
	unsigned int index;

	va_start(nums, n);

	for (index = 0; index < n; index++)
	{
		printf("%d", va_arg(nums, int));

		if (index != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}

	printf("\n");

	va_end(nums);
}
