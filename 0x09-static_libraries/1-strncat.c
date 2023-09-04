#include "main.h"
/**
 * _strncat - Concatenates two strings, at most using 'n' bytes from 'src'.
 *
 * @dest: Pointer to the destination string.
 * @src: Pointer to the source string to be concatenated.
 * @n: The maximum number of bytes to concatenate from 'src'.
 *
 * Return: A pointer to the resulting concatenated string in 'dest'.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;
	for(i = 0; dest[i] != '\0'; i++);
	// Concatenate at most 'n' characters from src//
	for(j = 0; src[j] != '\0' && j < n; j++)
	{
		dest[i] = src[j];
		i++;
	}
	// Null-terminate the concatenated string//
	dest[i] = '\0';
	return(dest);
}
