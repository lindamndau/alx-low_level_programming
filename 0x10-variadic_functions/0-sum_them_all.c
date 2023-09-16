#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * This function  returns the sum of all its parameters.
 * If n == 0, return 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum = 0;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(ap, int);
	}

	va_end(ap);

	return (sum);
}
