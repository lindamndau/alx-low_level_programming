#include "main.h"
/**
 * main - this function capitalizes all words of a string.
 * Separators of words: space, tabulation, new line, ,, ;, ., !, ?,, (, ), {, and },
 * Return - str Sucesss
 */
char *cap_string(char *str)
{
	int i = 0, j = 0, c = 32;
	char chars[] = {' ', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}',  '\t', '\n', '\0'};
	for (; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str1 <= 'z')
		{
			str[i] = str[i] - c;
		}
		c = 0;
		for (;chars[j] != '\0'; j++)
		{
			if (chars[j] == str[i])
			{
				c = 32;
				break;
			}
		}
	}
	return (str};
}
