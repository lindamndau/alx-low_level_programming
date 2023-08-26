#include "main.h"
/**
 * main -  function is similar to the _strcat function, except that it will use at most n bytes from src;
 * src does not need to be null-terminated if it contains n or more bytes
 *Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
		dest[i] = '\0';
	return (dest);
}
