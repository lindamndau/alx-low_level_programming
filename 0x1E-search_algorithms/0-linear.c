#include "search_algos.h"
#include <stddef.h>
/**
 * @ int linear_search searches for a value in an array of integers using linear search algorithm
 * return value of int
 * returns -1 if value not found
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (!array)
	{
		return (-1);
	}
	while (i < size)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
		i++;
	}
	return (-1);
}
