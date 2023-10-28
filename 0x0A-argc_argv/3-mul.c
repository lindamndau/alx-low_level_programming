#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/**
 * This program multiplies two numbers
 * prints the result of the multiplication, followed by a new line
 * assumes that the two numbers and result of the multiplication can be stored in an integer
 * If the program does not receive two arguments, program prints, followed by a new line, and return 1
 */
int main(int argc, char ** argv)
{
	int result = 0, num1, num2;
	if(argc !=  3)
	{
		printf("%s\n", "Error");
		return 1;
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	result = num1 * num2;
	printf("%d\n", result);
	return 0;
}	
