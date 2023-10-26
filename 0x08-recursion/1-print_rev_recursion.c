#include "main.h"
#include <string.h>

/**
 * This function prints a string in reverse.
 * Returns 0 for sucess
 */
void _print_rev_recursion(char *s)
{
	int n = 0;

	if (*s)
	{
		n++;
		n += _strlen_recursion(s + 1);
	}
	return (_print_rev_recursion);
}
