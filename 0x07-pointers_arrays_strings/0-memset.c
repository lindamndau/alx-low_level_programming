#include "main.h"
/**
 * This function fills memory with constat bytes
 * The function fills the first n bytes of memory area pointed to by s with constant byte b.
 * Returns: a pointer to the memory area s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned char *u = (unsigned char *) s;

	while (n-- > 0x00)
	{
		*u++ = b;
	}
	return (s);
}
