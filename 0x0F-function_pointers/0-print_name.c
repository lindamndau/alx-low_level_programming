#include "function_pointers.h"
#include <stdio.h>
/**
 * This function prints name
 * Returns void
 *
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}
	f(name);
}
