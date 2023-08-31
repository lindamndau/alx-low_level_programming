#include "main.h"
/**
 * main - This function prints a string in reverse.
 * base case is null '\0'.
 * loop prints characters in reverse.
 * Returns *s
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_putchar(*s);
}
