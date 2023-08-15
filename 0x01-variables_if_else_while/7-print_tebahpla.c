#include <stdio.h.>
#include <stdlib.h>
#include <time.h>
/**
 * main - Write a program that prints the lowercase alphabet in reverse, followed by a new line.
 * Return (0) Success !
 */

int main(void)
{
	char tebahpla [] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'q', 'r', 's', 't', 'u', 'v', 'w', 'y', 'z',}
	for (tebahpla = 97; tebahpla < 122; tebahpla--;)
		putchar(tebahpla);
	return (0);
}
