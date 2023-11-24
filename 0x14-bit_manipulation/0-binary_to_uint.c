#include "main.h"
#include <stdio.h>
/**
 * @Discription -  converts a binary number to an unsigned int.
 * Returns : converted string
 *
 *
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result, p;
	int len;

	if (b == NULL)
	{
		return (0);
	}

	for (len = 0; b[len]; len++)
	{
		if (b[len] != '0' && b[len] != '1')
		{
			return (0);
		}
	}

	for (power = 1, result = 0, len--; len >= 0; len--, p *= 2)
	{
		if (b[len] == '1')
		{
			result += p;
		}
	}

	return (result);
}
