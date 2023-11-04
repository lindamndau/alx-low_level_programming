#include "main.h"
#include <stdlib.h>
/**
  * _isdigit - tells if the string consists of digits
  * @argv: pointer to current item in argument
  * Return: return 0 if all digits, 1 if not all digits.
  */
int _isdigit(char *argv)
{
	int i;

	i = 0;
	while (argv[i])
	{
		if (argv[i] >= '0' && argv[i] <= '9')
		{
			i++;
		}
		else
		{
			return (1);
		}
	}
	return (0);
}
/**
  * _atoi - converts a string of ascii digits to the values they represent
  * @s: pointer to the source string
  * Return: value of digits
  */
int _atoi(char *s)
{
	int i, result;

	i = result = 0;
	while (s[i])
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			result *= 10;
			result += (s[i] - '0');
		}
		i++;
	}
	return (result);
}
/**
 * This fuction multiplies two positive numbers.
 * num1 and num2 is passed in base 10
 * prints error followed by newline and exit(98), when argc = 0;
 *
 */
int main(int argc, char *argv[])
{
	int i;

	malloc();
	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	for (i = 1; i < argc; i++)
	{
		if (_isdigit(argv[i]))
		{
			printf("Error\n");
			exit(98);
		}
	}
	return (0);
}
