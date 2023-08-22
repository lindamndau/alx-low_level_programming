#include "main.h"
/**
 * main - a function that prints a string, in reverse, followed by a new line.
 *Prototype: void print_rev(char *s);
 */
void print_rev(char *s);
{
	int i, j, len;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	len = i;

	for (j = len - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}

	_putchar('\n');
}
