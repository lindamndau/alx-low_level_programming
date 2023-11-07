#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - Free memory associated with a dog structure.
 * @d: Pointer to the dog structure to be freed.
 *
 * This function frees the memory allocated for a dog structure, including its
 * 'name' and 'owner' strings, and the structure itself. It checks if the pointer
 * is not NULL before attempting to free memory.
 *
 * @d: Pointer to the dog structure to be freed.
 */
void free_dog(dog_t *d)
{
	if (d != 0)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
