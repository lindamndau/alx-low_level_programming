#include "function_pointers.h"
#include <stddef.h>
#include <stdio.h>
/**
 * This function searches for an integer
 * where size is the number of elements in the array array
 * cmp is a pointer to the function to be used to compare values
 * int_index returns the index of the first element for which the cmp function does not return 0
 * If no element matches, return -1
 * If size <= 0, return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, r;

	if (size > 0 && array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			r = cmp(array[i]);
			if (r)
				break;
		}
		if (i < size)
			return (i);
	}
	return (-1);
}
