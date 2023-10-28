#include <stdio.h>
#include <stdlib.h>
/**
 * MAIN -  prints the number of arguments passed into it.
 * Returns (0)  the number of arguments passed into main
 *
 */
int main(int argc, char *argv[])
{
	if(argc--)
	{
		printf("%d\n", argc[0]);
	}
	return (0);
}
