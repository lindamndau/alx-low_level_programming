#include "main.h"
/**
 * main - a function that prints a string, followed by a new line, to stdout.
 * Return String and '\n'
 *
 */
void _puts(char *str);
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
