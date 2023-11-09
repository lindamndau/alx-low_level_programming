#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - Apply a specified action to each element of an integer array.
 *
 * @array: Pointer to an array of integers.
 * @size: The number of elements in the array.
 * @action: A pointer to a function that takes an integer as a parameter and returns void.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && size && action)
	{
		for (i = 0; i < size; i++)
		{
			action(*(array + i));
		}
	}
}
