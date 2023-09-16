#include "function_pointers.h"
/**
 * This function executes a function given as a parameter on each element of an array.
 * where size is the size of the array
 * and action is a pointer to the function you need to use
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
