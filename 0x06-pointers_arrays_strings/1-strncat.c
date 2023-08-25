#include "main.h"
/**
 * main -  function is similar to the _strcat function, except that it will use at most n bytes from src;
 * src does not need to be null-terminated if it contains n or more bytes
 *Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n);
{
	int i = 0; j = 0;
	for(; dest[i] != '\0'; i++);
	for(; src[j] <= n; && src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	if( j < n)
	{
		dest[i] = '\0'
	}
	return (dest);
}
