#include "main.h"
#include <stdio.h>
/**
 * _atoi - Converts a string to an integer.
 * @s: The string to convert.
 *
 * This function converts the string @s to an integer. It reads the
 * characters in @s until it encounters a non-digit character or the
 * end of the string. The converted integer is returned.
 *
 * Return: The converted integer from the string @s.
 */
int _atoi(char *s)
{
	int result = 0, sign = 0;
        while (*s == ' ' || *s == '\t' || *s == '\n')
	{
		s++;
	}
	if (*s == '-')
	{
		sign = -1;
		s++;
	}
	else if(*s == '+')
	{
		s++;
	}
	while (*s >= '0' && *s <= '9')
	{
		result = result * 10 + (*s - '0');
		s++;
	}
	return result * sign;
}
