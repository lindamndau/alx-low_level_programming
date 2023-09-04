#include "main.h"
/**
 * _abs - Calculates the absolute value of an integer.
 * @n: The integer to calculate the absolute value for.
 *
 * This function calculates and returns the absolute value of the integer @n.
 *
 * Return: The absolute value of the integer @n.
 */
int _abs(int n)
{
	if(n >= 0)
	{
		return(n);
	}
	else
	{
		return(-n);
	}
}
