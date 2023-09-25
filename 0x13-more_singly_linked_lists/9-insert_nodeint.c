#include "lists.h"
#include <stdlib.h>
/**
 * This function inserts a new node at a given position.
 * @head: Pointer to a pointer to the head of the list.
 * @idx: Index where the new node should be added (starting at 0).
 * @n: Value to be stored in the new node.
 * Returns: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *node, *current;
	if (head == NULL)
	{
		return (NULL);
	}
	node = malloc(sizeof(listint_t));
	if(node == NULL)
	{
		return (NULL);
	}
	node->n = n;
	if (idx == 0)
	{
		node->next = *head;
		*head = node;
		return(node);
	}
	current = *head;
	for (i = 0; current != NULL && i < idx - 1; i++)
	{
		current = current->next;
	}
	if (i == idx - 1 && current != NULL)
	{
		node->next = current->next;
		current->next = node;
		return(node);
	}
	free(node);
	return(NULL);
}
