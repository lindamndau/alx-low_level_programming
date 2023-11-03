#include "main.h"
#include <stdlib.h>
/**
 * This function  allocates memory using malloc.
 * if function fails, function terminates with status 98.
 *
 *
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);
    	if (ptr == NULL)
    	{
        	exit(98);
    	}
    	return ptr;
}
