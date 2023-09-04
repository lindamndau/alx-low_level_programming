#include "main.h"
/**
 * _puts - Prints a string, followed by a new line, to stdout.
 *
 * @str: The string to be printed.
 */
void _puts(char *s)
{
	int i = 0;
	if(*s == '\0')
	{
		return;
	}
	while(*s != '\0')
	{
		_putchar(*s);
		i++;
	}
	_putchar('\n');
}
