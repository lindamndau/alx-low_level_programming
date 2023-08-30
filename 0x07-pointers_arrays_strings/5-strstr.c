#include"main.h"
/**
 * main - This function locates a substring.
 * The function finds the first occurrence of the substring needle in the string haystack. The terminating null bytes (\0) are not compared
 * Returns a pointer to the beginning of the located substring, or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		if ((*haystack == *needle && coincidence(haystack, needle) == 1) || !*needle)
		{
			return (haystack);
		}
		else
		{
			haystack++;
		}
	}
	return (0);
}
