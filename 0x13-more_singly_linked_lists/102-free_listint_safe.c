#include "lists.h"
#include <stddef.h>
/**
 * This function frees a listint_t list.
 * @h: Pointer to a pointer to the head of the list
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *current = *h;
	size_t size = 0;
	listint_t *next_node = NULL;
	while (current != NULL)
	{
		size++;
		next_node = current->next;
		free(current);
		current = next_node;
		if (current && current >= current->next)
		{
			 *h = NULL;
			  break;
		}
	}
	*h = NULL;
	return size;
}
