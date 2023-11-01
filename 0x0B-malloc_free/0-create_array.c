#include "main.h"
#include <stdlib.h>
/**
 * create array - creates array and intiliazes a specific char.
 * @*s: Pointer pointing to array
 * @size: the size of the memory to print
 *
 * Return:Pointer to  array of characetrs.
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	s = malloc(sizeof(char) * size);
	if (size == 0 || s == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}
	return (s);
}
