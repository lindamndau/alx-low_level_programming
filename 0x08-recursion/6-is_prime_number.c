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
	for(i = 0; i <= (n / 2); i++)
	{
		if(n % i == 0)
		{
			return(0);
		}
	}
	return(1);
}
