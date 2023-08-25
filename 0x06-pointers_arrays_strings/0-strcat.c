#include "main.h"
/**
 * Main -  This function appends the src string to the dest string, overwriting the terminating null byte (\0) at the end of dest, and then adds a terminating null byte
 * Return :  pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src);
{
	int i = 0, j = 0;
	for(; dest[i] != '\0'; && src[j] != '\0'; i++, j++)
	{
		dest[i] = *src[j];
	}
	dest[i] = ('\0');
	return (dest);
}
