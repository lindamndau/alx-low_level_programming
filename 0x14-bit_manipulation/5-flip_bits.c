#include "main.h"
/**
 * @Discription - returns the number of bits you would need to flip to get from one number to another.
 * @flip_count - counter to keep track of the number of bits to flip
 * Return - flip count of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff;
	int flip_count;

	diff = n ^ m;
	flip_count = 0;

	while (diff)
	{
		flip_count++;
		diff &= (diff - 1);
	}

	return (flip_count);
}
