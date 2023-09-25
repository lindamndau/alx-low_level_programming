#include "lists.h"
/**
 * This function returns the nth node of a listint_t linked list.
 * @index: Index of the node to retrieve (starting at 0).
 * @head: Pointer to the head of the list.
 * Returns pionter to the nth node, or NULL if the node does not exist.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
    	listint_t *current;
	current = head;
	for (i = 0; current != NULL && i < index; i++)
    	{
        	current = current->next;
    	}
	if (i == index && current != NULL)
    	{
        	return current;
    	}
	return NULL;
}
