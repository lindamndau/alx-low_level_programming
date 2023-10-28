#include <stdio.h>
/**
 * MAIN -  prints the number of arguments passed into it.
 * Returns (0)  the number of arguments passed into main
 *
 */
int main(int argc, __attribute__ ((unused)) char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
