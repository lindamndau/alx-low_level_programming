#include "main.h"
#include <stdio.h>
/**
 * @Discription - returns the number of bits you would need to flip to get from one number to another.
 * @flip_count - counter to keep track of the number of bits to flip
 * Return - flip count of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int difference = original_number ^ target_number;
	int flip_count = 0;
	while (difference)
	{
		flip_count++;
		difference &= (difference - 1);
	}
	 return flip_count;
}
