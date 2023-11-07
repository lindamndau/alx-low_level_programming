#include "dog.h"
#include <stdio.h>
/**
 * print_dog - Print the details of a dog structure.
 * @d: Pointer to the dog structure to be printed.
 *
 * This function prints the details of a dog structure, including its name, age, and owner.
 * It checks if the pointer is not NULL and if the 'name' and 'owner' fields are not NULL
 * before attempting to print them.
 *
 * @d: Pointer to the dog structure to be printed.
 */
void print_dog(struct dog *d)
{
	if (d != 0)
	{
		if ((*d).name != '\0')
			printf("Name: %s\n", (*d).name);
		else
		{
			printf("Name: (NULL)\n");
		}
		printf("Age: %f\n", (*d).age);
		if ((*d).owner != '\0')
		{
			printf("Owner: %s\n", (*d).owner);
		}
		else
		{
			printf("Owner: (NULL)\n");
		}
	}
}
