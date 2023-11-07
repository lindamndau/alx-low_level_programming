#include "dog.h"
#include <stdlib.h>
#include <string.h>
/**
 * new_dog - Creates a new dog structure
 * @name: Pointer to a string with the dog's name
 * @age: Age of the dog
 * @owner: Pointer to a string with the owner's name
 *
 * Return: Pointer to the newly created dog structure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr;
	ptr = malloc(sizeof(dog_t));
	if(ptr == NULL)
	{
		return (NULL);
	}
	if(owner == NULL)
	{
		free(ptr);
		free(owner);
		return (NULL);
	}
	if(name == NULL)
	{
		return(NULL);
	}
	ptr -> name = name;
	ptr -> age = age;
	ptr -> owner = owner;
	return (ptr);
}
