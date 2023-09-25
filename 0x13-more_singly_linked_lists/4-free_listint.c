#include "lists.h"
#include <stdlib.h>
/**
 * This function frees listint_t
 * @n: Value to be stored in the new node.
 * @head: Pointer to a pointer to the head of the list.
 */
void free_listint(listint_t *head)
{
	listint_t *current, *next_node;
	current = head;
	while (current != NULL)
	{
		next_node = current->next;
		free(current);
		current = next_node;
	}
}
