#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * This function allocates memory for an array, using malloc
 * The _calloc function allocates memory for an array of nmemb elements of size bytes each and returns a pointer to the allocated memory.
 * The memory is set to zero
 * If nmemb or size is 0, then _calloc returns NULL
 * If malloc fails, then _calloc returns NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;

	*nmemb = (int)calloc(sizeof(size);

	for(i = 0; i < size; i++)
	{
		if(nmeb == 0 || size == 0)
		{
			return(NULL);
		}
		return(*nmemb);
	}

	if(*nmemb == 0)
	{
		return(NULL);
	}
	free(nmemb);
	return(0);
}
