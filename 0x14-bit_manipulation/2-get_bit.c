#include "main.h"
#include <stdlib.h>
/**
 *
 * @Discription -  returns the value of a bit at a given index.
 * @ index - given value
 * Returns : n 
 *
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8) 
	{
        	return -1;
    	}

    	return (n >> index) & 1;
}
