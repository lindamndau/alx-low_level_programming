#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	int last_of_digit = n;
	if (n > 5)
	{
		printf("and is greater than 5 %d\n", n)
	}
	else if (n == 0)
	{
		printf("and is 0 %d\n", n)
	}
	else (n < 0)
	{
		printf("and is less than 6 and not 0 %d\n", n);
	return (0);
}
