#include "main.h"
/**
 * main - This function works exactly like strncpy function.
 *n being the maximum number of characters to be copied from src string to dest string/null terminate if n is < '\0'.
 *Return: concatenated string to dest
 */
char *_strncpy(char *dest, char *src, int n);
{
	int i = 0; j = 0;
	for(; dest[i] != '\0'; i++);
	for(; src[j] < n; && src[j] != 0)
	{
		dest[i] = src[j];
		i++;
	}
	if(n < '\0')
	{
		_putchar('\0');
	}
	return (dest);
}
