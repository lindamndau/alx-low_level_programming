#include "main.h"

/**
 * This function prints a string in reverse.
 * Returns 0 for sucess
 */
void _print_rev_recursion(char *s)
{
	if(*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
