#include "main.h"
/**
 * main - This function gets the length of a prefix substring.
 * Returns: the number of bytes in the initial segment of s which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int letter;
	int pos = 0;

	while (s[pos])
	{
		for (letter = 0; accept[letter]; letter++)
		{
			if (accept[letter] == s[pos])
			{
				break;
			}
		}
		if (!accept[letter])
		{
			break;
		}
		pos++;
	}
	return (pos);
}
