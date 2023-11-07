#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * init_dog - Initialize a dog structure.
 * @d: Pointer to the dog structure to initialize.
 * @name: Name of the dog.
 * @age: Age of the dog.
 * @owner: Owner of the dog.
 *
 * This function initializes the members of a dog structure with the provided
 * values. Memory is allocated for the 'name' and 'owner' strings.
 *
 * Returns: None (void)
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
    		;
	}
  	else
    	{
      		d->name = name;
      		d->age = age;
      		d->owner = owner;
    	}
}
