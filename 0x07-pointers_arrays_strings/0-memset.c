#include "main.h"
/**
 * This function fills memory with constat bytes
 * The function fills the first n bytes of memory area pointed to by s with constant byte b.
 * Returns: a pointer to the memory area s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
