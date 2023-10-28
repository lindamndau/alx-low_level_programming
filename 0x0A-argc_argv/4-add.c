#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - adds positive numbers
 * @argv: array of pointers to strings
 * @argc: argument count
 *
 * Returns: 0 or 1
 */
int main(int argc, char *argv[])
{
	int i, j, n;
	int sum = 0;

	for (j = 1; j < argc; j++)
	{
		for (n = 0; argv[j][n] != '\0'; n++)
		{
			if (argv[j][n] || argv[j][n] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	for (i = 1; i < argc; i++)
	{
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
