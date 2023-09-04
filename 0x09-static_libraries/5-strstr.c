#include "main.h"
/**
 * _strstr - Locates a substring within a string.
 * @haystack: The string to search in.
 * @needle: The substring to search for.
 *
 * This function finds the first occurrence of the substring @needle
 * in the string @haystack. If the substring is found, it returns a
 * pointer to the beginning of the substring within the string @haystack.
 * If the substring is not found, it returns NULL.
 *
 * Return: A pointer to the first occurrence of the substring @needle
 *         in the string @haystack, or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0, j = 0;
	for(haystack[i] != '\0'; i++;)
	{
		for(needle[j] != '\0'; j++;)
		{
			if(haystack[i+j] == needle[j])
			{
				break;
			}
		}
		if(needle[j] == '\0')
		{
			return &haystack[i];
		}
	}
	return '\0';
}
