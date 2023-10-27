#include "main.h"
int _sqrt_recursion2(int n, int h);
int _sqrt_recursion(int n);

/**
 * This function returns the natural square root of a number.
 * If n does not have a natural square root, the function returns -1
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if(n == 0 || n == 1)
	{
		return n;
	}

	return (_sqrt_recursion2(n,n / 2));
}
/**
 * Helper function for calculating the square root using recursion.
 * Uses a binary search approach to find the square root.
 */
int _sqrt_recursion2(int n, int h)
{
	if(h * h == n)
	{
		return h;
	}
	else if (h * h < n)
	{
		return _sqrt_recursion2(n, h + 1);
	}
	else
	{
		return _sqrt_recursion2(n, h - 1);
	}
}
