#include "main.h"
#include <stdlib.h>
/**
 * @ Discription - sets the value of a bit to 1 at a given index.
 * @n - decimal number passed by pointer
 * @index - ndex position to change, starting from 0
 * Returns: 1 Success
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int t;

	if (index > 64)
	{
		return (-1);
	}

	for (t = 1; index > 0; index--, t *= 2)
		;
	*n += t;

	return (1);
}
