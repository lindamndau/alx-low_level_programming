#include "main.h"
/**
 * _calloc - Allocates memory for an array, setting memory to zero
 * @nmemb: The number of elements in the array
 * @size: The size of each element in bytes
 *
 * Return: A pointer to the allocated memory, or NULL if allocation fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char * p;
	if(nmeb == 0 || size == 0)
	{
		return NULL;
	}
	p = malloc(nmemb * size);
	if(p != NULL)
	{
		for(i = 0; i < (nmemb * size); i++)
		{
			p[i] = 0;
			return(p);
		}
	}
	else
	{
		return NULL;
	}
}
