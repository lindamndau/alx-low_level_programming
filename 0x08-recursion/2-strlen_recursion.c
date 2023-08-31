#include "main.h"
/**
 * main - This function returns the length of a string.
 *Base case is '\0'
 *1 + strlen_recursion(*s + 1); This function is the recursion call.
 */
int _strlen_recursion(char *s)
{
	if(*s == '\0')
	{
		return(0);
	}
	return 1 + _strlen_recursion(*s + 1);
}
