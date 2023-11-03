#include "main.h"
#include <stdlib.h>
/**
 * _realloc - Reallocate memory for a pointer to a new size.
 * @tmp_b: temporay pointer
 * @ptr: Pointer to the memory block to be reallocated.
 * @old_size: The current size of the memory block in bytes.
 * @new_size: The new size to allocate in bytes.
 *
 * Return: A pointer to the newly reallocated memory, or NULL on failure.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{

	void *tmp_b;
	unsigned int i;

	if (ptr == NULL)
	{
		tmp_b = malloc(new_size);
		return (tmp_b);
	}
	else if (new_size == old_size)
	{
		return (ptr);
	}

	else if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	else
	{
		tmp_b = malloc(new_size);
		if (tmp_b != NULL)
		{
			for (i = 0; i < min(old_size, new_size); i++)
			{
				*((char *)tmp_b + i) = *((char *) ptr + i);
			}
			free(ptr);
			return (tmp_b);
		}
		else
			return (NULL);
	}
}
