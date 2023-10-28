#include <stdio.h>
#include <stdlib.h>
/**
 * Main function prints all arguments it receives.
 *
 */
int main(int argc, char **argv)
{
	int count;
	for(count = 1; count < argc; count++)
	{
		printf("%s\n", argv[count]);

	}
	return 0;
}
