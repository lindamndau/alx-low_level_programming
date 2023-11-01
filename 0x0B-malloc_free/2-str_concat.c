#include "main.h"
#include <stdlib.h>
/**
 * str_concat - Concatenate two strings.
 *
 * @s1: The first string.
 * @s2: The second string to concatenate.
 *
 * Return: A pointer to a newly allocated memory space containing the
 * concatenated string, or NULL if memory allocation fails or if either
 * s1 or s2 is NULL.
 */
char *str_concat(char *s1, char *s2)
{
	char *cat;
	int i, j;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	i = j  = 0;
	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[j] != '\0')
	{
		j++;
	}
	cat = malloc(sizeof(char) * (i + j + 1));

	if (cat == NULL)
	{
		return (NULL);
	}
	i = j = 0;
	while (s1[i] != '\0')
	{
		cat[i] = s1[i];
		i++;
	}

	while (s2[j] != '\0')
	{
		cat[i] = s2[j];
		i++, j++;
	}
	cat[i] = '\0';
	return (cat);
}
