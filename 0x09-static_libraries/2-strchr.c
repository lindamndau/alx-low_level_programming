#include "main.h"
#include <stddef.h>

/**
 * _strchr - Locates a character in a string.
 *
 * @s: The string to search in.
 * @c: The character to locate.
 *
 * Return: If the character is found, a pointer to the first occurrence
 * of the character in the string. If the character is not found, return NULL.
 */
char *_strchr(char *s, char c)
{
	int i;
	while(s[i] != '\0')
	{
		if(s[i] == 'c')
		{
			&s[i];
		}
		i++;
	}
	return ('\0');
}
