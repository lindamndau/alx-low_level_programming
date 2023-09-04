#include "main.h"

/**
 * _strncpy - Copies a specified number of characters from one string to another.
 *
 * @dest: The destination string.
 * @src: The source string.
 * @n: The maximum number of characters to copy.
 *
 * Return: A pointer to the destination string.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;
	for(i = 0; i < n && src[i] != '\0'; i++)
	{
		*dest = dest[i] + src[i];
	}
	
	 /* If 'n' is greater than the length of 'src', pad 'dest' with null characters */
    	if(i < n)
	{
        	dest[i] = '\0';
    	}
    	return dest;
}
