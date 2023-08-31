#include "main.h"
/**
 * main - This function  prints a string, followed by a new line.
 * Base case: end of string
 * _putchar s prints the current character.
 * (s + 1) Move to the next character
 */
void _puts_recursion(char *s)
{
	if(*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
