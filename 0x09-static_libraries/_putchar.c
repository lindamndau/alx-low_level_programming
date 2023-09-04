#include "main.h"
#include <unistd.h>
/**
 * int_putchar - Writes a single character to standard output
 *
 * @c: The character to be written
 *
 * Return: On success, the character is written, and 1 is returned.
 *         On error, -1 is returned, and error is set.
 */
int _putchar(char c)
{
	return write(1, &c, 1);
}
