#include "function_pointers.h"
/**
 * int_index - Searches for an integer in an array using a comparison function.
 *
 * @array: Pointer to an array of integers.
 * @size: The number of elements in the array.
 * @cmp: A pointer to a function that takes an integer as a parameter and returns an integer.
 *
 * Return: The index of the first matching element, or -1 if no match is found or if there are invalid inputs.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(*(array + i)))
		{
			return (i);
		}
	}
	return (-1);
}
