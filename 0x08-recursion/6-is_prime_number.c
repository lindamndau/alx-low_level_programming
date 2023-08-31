#include "main.h"
/**
 * main - This function returns 1 if the input integer is a prime number, otherwise return 0.
 * Returns: 1 prime number else 0 
 */
int is_prime_number(int n)
{
	if(n <= 1)
	{
		return (0);
	}
	else if (n == 2)
	{
		return (1);
	}
	else
	{
		return is_prime_number(n);
	}
}
