#include"main.h"
/**
 * main - This function locates a substring.
 * The function finds the first occurrence of the substring needle in the string haystack. The terminating null bytes (\0) are not compared
 * Returns a pointer to the beginning of the located substring, or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *duplicate = haystack;

		while (*haystack == *needle && *haystack != '\0' && *needle != '\0')
		{
			needle++;
			haystack++;
		}
		if (!*needle != '\0')
		{
			return (duplicate);
		}
		haystack++;
	}
	return (0);
}
