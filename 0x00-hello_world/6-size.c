#include <stdio.h>
/**
 * main -  C program that prints the size of various types on the computer it is compiled and run on.
 * Returns: 0(Success)
 */
int main(void)
{
	float floatType;

int intType;

char charType;

double doubleType;

printf(“The total size of the float is equal to : %zu bytes\n”, sizeof(floatType));

printf(“The total size of the int is equal to : %zu bytes\n”, sizeof(intType));

printf(“The total size of char is equal to : %zu byte\n”, sizeof(charType));

printf(“The total size of the double is equal to : %zu bytes\n”, sizeof(doubleType));

return 0;
}
