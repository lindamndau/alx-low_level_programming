#include <stdio.h>
/**
 * @ int linear_search searches for a value in an array of integers using linear search algorithm
 * return value of int
 * returns -1 if value not found
 */
int linear_search(int *array, size_t size, int value)
{
	int i = 0;
	for(,i < size; i++)
	{
		if(i == value)
		{
			return i;
		}
		else
		{
			if(i != value || array == NULL)
			{
				return -1;
			}
		}
	}
}
