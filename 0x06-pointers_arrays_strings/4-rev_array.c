#include "main.h"
/**
 * main - This function reverses the content of an array of integers.
 * n is the number of elements of the array
 * Return: 0 Sucesss!
 */
void reverse_array(int *a, int n)
{
	int i, last;

	last = n - 1;
	for (i = 0; i < n / 2; i++)
	{
		int start, end;

		start = a[i];
		end = a[last];
		a[i] = end;
		a[last] = start;
		last--;
	}
}
