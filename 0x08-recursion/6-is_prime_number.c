#include "main.h"
/**
 * main - This function returns 1 if the input integer is a prime number, otherwise return 0.
 * Ruturns: 1 prime number else 0 
 */
int is_prime_number(int n)
{
	if(n <= 1)
	{
		return (0);
	}
	for(n = 0; n <= (n / 2); n++)
	{
		if(n % n == 0)
		{
			return(0);
		}
	}
	return(1);
}
