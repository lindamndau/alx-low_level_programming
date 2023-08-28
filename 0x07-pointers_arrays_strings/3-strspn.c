#include "main.h"
/**
 * main - This function gets the length of a prefix substring.
 * Returns: the number of bytes in the initial segment of s which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int  length = 0;
	int i = 0; j = 0;
	for (j = 0; *(s + j); j++)
	{
		for (i = 0; *(accept + i); i++)
		{
			if (*(s + j) == *(accept + i))
				break;
		}
		if (*(accept + i) == '\0')
		break;
	}
	return (j);
}
