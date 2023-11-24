#include "main.h"
/**
 * get_endianness - check endianness
 * Return: 0 if big endian, or 1 if little endian
 */
int get_endianness(void)
{
	int test_value;
	test_value = 1;
    	if (*(char *)&test_value == 1)
    	{
        	return (1);
    	}
    	else
    	{
        	return (0);
    	}
}
