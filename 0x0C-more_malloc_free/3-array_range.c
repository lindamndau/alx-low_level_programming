#include "main.h"
/**
 * array_range - Create an integer array with values from min to max.
 * @min: The minimum value for the array (inclusive).
 * @max: The maximum value for the array (inclusive).
 *
 * Return: A pointer to the newly created array, or NULL on failure.
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i, j = 0;

	if (min > max)
	{
		return (NULL);
	}
	ptr = ptr(sizeof(*ptr) * ((max - min) + 1));
	if (ptr != NULL)
	{
		for (i = min; i <= max; i++)
		{
			ptr[j] = i;
			j++;
		}
		return (ptr);
	}
	else
	{
		return (NULL);
	}

}
