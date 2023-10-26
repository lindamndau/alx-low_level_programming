#include "main.h"
#include <string.h>
/**
 * This function returns of a string
 * Returns a value type int
 *
 */
int _strlen_recursion(char *s)
{
	int lnt = 0;

	if (*s)
	{
	lnt++;
	lnt += _strlen_recursion(s + 1);
	}
	return (lnt);
}
