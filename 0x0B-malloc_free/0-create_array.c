#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * This function creates an array of chars, and initilaizes it with a specific char
 * Returns NULL if size = 0
 * Returns a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *arr = NULL;
	unsigned int i;
	if(size == 0)
	{
		return(NULL);
	}
	if(size != 0)
	{
		arr = (char *)malloc(size * sizeof(char));
		if (array != NULL)
		{
			for (i = 0; i < size; i++)
				array[i] = c;
		}
		return (array);
	}
}
