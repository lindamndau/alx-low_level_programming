#include "variadic_functions.h"
#include <stdarg.h>
/**
 * This function returns the sum of all its parameters.
 * If n == 0, return 0
 *
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list(ag);
	if(n == 0)
	{
		return 0;
	}
	va_start(ag, n);
	for(i = 0; i < n; i++)
	{
		sum += va_arg(ag, int);		
	}
	va_end(ag);
	return (sum);
}
