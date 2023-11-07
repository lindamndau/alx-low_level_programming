#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Description: This function prints the value of the __FILE__ macro,
 * which represents the name of the current source file, to the standard output.
 *
 * Return: 0 to indicate successful execution
 */
int main()
{
	printf("%s\n", __FILE__);
	return 0;
}
