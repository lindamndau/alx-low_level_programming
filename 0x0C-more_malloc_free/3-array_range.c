#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * This function  creates an array of integers.
 * The array created should contain all the values from min (included) to max (included), ordered from min to max
 * Return: the pointer to the newly created array
 * If min > max, return NULL
 * If malloc fails, return NULL
 */
int *array_range(int min, int max)
{
	int i;
	int *arr;
	for(i = 0; i <  max; i++)
	{
		if(min > max)
		{
			return(NULL);
		}
	}
	*arr = (int)malloc(sizeof(int));
	if(*arr == 0)
	{
		return(NULL);
	}
	return(arr);
	free(arr);
}
