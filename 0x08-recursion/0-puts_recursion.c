#include "main.h"
#include <stddef.h>
/**
 * This function prints a string followed by a new line.
 * Returns 0 whne successfull
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	_putchar('\n');
}
