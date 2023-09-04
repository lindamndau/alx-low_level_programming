#include "main.h"
/*
 * strpbrk - Searches a string for a set of bytes.
 * @s: The string to search in.
 * @accept: The set of bytes to search for.
 *
 * This function searches the string @s for any of the bytes in the
 * string @accept. If any of the bytes in @accept are found in @s, it
 * returns a pointer to the first occurrence in @s where any of the
 * bytes are found. If no matching bytes are found, it returns NULL.
 *
 * Return: A pointer to the first occurrence of a matching byte, or
 *         NULL if no matching bytes are found.
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0, j = 0;
	for(s[i] != '\0'; i++;)
	{
		for(accept[j] != '\0';  j++;)
		{
			if(s[i] == accept[i])
			{
				return &s[i];
			}
		}
	}
	return ('\0');
}
