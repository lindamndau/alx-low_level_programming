#include <stdio.h>
#include "main.h"
/**
 * This main program prints the its own name
 *
 * Returns exit  success
 */
int main (int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc ; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
