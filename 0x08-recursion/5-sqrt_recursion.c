#include "main.h"
#include <stdio.h>
#include <math.h>
/**
 * main - THis function returns the natural square root of a number.
 * If n does not have a natural square root, the function should return -1
 */
int _sqrt_recursion(int n)
{
	if(n < 0)
	{ 
		return (-1);
	}
	else if(n <= 1)
	{
		return (n);
	}
	else
	{
		return n * _sqrt_recursion(n-1);
	}
}
