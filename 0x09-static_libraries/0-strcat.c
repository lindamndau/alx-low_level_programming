#include "main.h"
/**
 * _strcat - Concatenates two strings.
 *
 * @dest: The destination string, where the result is stored.
 * @src: The source string to be appended to the destination.
 *
 * Return: A pointer to the resulting concatenated string.
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;
	while(dest[i] != '\0')
	{
		i++;
	}
	while(src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = ('\0');
	return (dest);
}
