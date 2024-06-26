#include "search_algos.h"
#include <stddef.h>
/**
 *@int binary_search - function searches for a value in a sorted array of integers using the Binary search algorithm
 *Returns Value of index(SUCCESS!)
 *Returns -1 (FAILURE)
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i = 0;
	int *a = array;

	if (!array)
	{
		return (-1);
	}

	while (size)
	{
		for (i = 0, printf("Searching in array: "); i < size; i++)
			printf("%d%s", a[i], i + 1 == size ? "\n" : ", ");

		i = (size - 1) / 2;
		if (a[i] == value)
		{
			return ((a - array) + i);
		}
		else if (a[i] > value)
		{
			size = i;
		}
		else
		{
			a += (i + 1);
			size -= (i + 1);
		}
	}
	return (-1);
}
