#include "main.h"
/**
* main - a function that swaps the values of two integers.
* Prototype: void swap_int(int *a, int *b);
*Swap pointer a and b
*/
void swap_int(int *a, int *b);
{
	int c;
	c = *a;
	*a = *b;
	*b = c;
}
