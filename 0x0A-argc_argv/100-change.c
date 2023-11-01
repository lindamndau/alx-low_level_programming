#include <stdio.h>
#include <stdlib.h>

/*
 * main - Entry point of the program
 *
 * @argc: The number of command-line arguments.
 * @argv: An array of command-line argument strings.
 *
 * Return: 0 for success, 1 for error.
 */
int main(int argc, char *argv[]) 
{
	int cents = 0, coins, i,count;
	if(argc != 2)
	{
		printf("%s\n", "Error");
		return 1;
	}
	if(argc--)
	{
		for(count = 0; count < 
		
