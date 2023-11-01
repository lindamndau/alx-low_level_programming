#include "main.h"
#include <stdlib.h>
/**
 * _strdup - Duplicate a string in memory.
 *
 * @str: The string to be duplicated.
 *
 * Return: A pointer to the newly allocated memory containing
 * a duplicate of the string, or NULL if memory allocation fails
 * or if str is NULL.
 */
char *_strdup(char *str)
{
	char *ptr;
	int i = 0, r = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[i] != '\0')
	{
		i++;
	}

	ptr = malloc(sizeof(char) * (i + 1));

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (r = 0; str[r]; r++)
	{
		ptr[r] = str[r];
	}

	return (ptr);
}
