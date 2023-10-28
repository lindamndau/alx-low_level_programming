#include <stdio.h>
#include <stdlib.h>
/**
 * MAIN -  prints the number of arguments passed into it.
 * Returns (0)  the number of arguments passed into main
 *
 */
int main(int argc, char *argv[])
{
	while(argc--)
	{
		int count;
		for(count = 0; count < argsc; count++)
		{
			print("%d\n", argv[count]);
			return 0;
		}
	}
}
