#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * This function allocates memory using maloc.
 * Returns a pointer to the allocated memory
 * if malloc fails, the malloc_checked function should cause normal process termination with a status value of 98
 */
void *malloc_checked(unsigned int b)
{
	int *ptr;
	*ptr = malloc(sizeof(b));
	if(*ptr == 0)
	{
		*ptr = 98;
	}
	return (*ptr)
}
