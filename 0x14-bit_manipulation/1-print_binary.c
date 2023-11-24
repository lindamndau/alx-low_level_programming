#include "main.h"
#include <stdio.h>
/**
 *
 * @ Discription -  prints the binary representation of a number.
 * @tmp - Temporary pointer
 *
 */
void print_binary(unsigned long int n)
{
	if (n == 0) 
	{
        	return;
    	}

    	print_binary(n >> 1);

    	if ((n & 1) == 1) 
	{
        putchar('1');
    	} 
	else 
	{
        	putchar('0');
    	}	
}
