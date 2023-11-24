#include "main.h"
#include <stdio.h>
/**
 * @Discription - sets the value of a bit to 0 at a given index.
 * @p -
 * Returns: -1
 *
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;
	unsigned int p;

	if (index > 64)
	{
		return (-1);
	}
	p = index;
	for (i = 1; p > 0; i *= 2, p--)
		;

	if ((*n >> index) & 1)
	{
		*n -= i;
	}

	return (1);
}
