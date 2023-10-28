#include <stdio.h>
#include <stdlib.h>
/**
 * MAIN -  prints the number of arguments passed into it.
 * Returns (0)  the number of arguments passed into main
 *
 */
int main(int argc, char ** argv)
{
	int count;
	if(argv--)
	{
		for(count = 0; count < argc; count++)
		{
			printf("%d\n", count);
		}
	}
	return 0;
}
