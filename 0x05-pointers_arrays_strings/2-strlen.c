#include "main.h"
#include <stdio.h>
/**
 * main -  a function that returns the length of a string.
 * Prototype: int _strlen(char *s);
 */
int _strlen(char *s);
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}
