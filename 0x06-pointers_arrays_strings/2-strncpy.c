#include "main.h"
/**
 * main - This function works exactly like strncpy function.
 *n being the maximum number of characters to be copied from src string to dest string/null terminate if n is < '\0'.
 *Return: concatenated string to dest
 */
char *_strncpy(char *dest, char *src, int n);
{
	int i;

	for (i = 0; src[i] != '\0' && i < n; i++)
		dest[i]	= src[i];
	while (i < n)
		dest[i++] = '\0';
	return (dest);
}
