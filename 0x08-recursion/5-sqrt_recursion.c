#include "main.h"
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
	return (_sqrt_recursion(n, 0));

}
