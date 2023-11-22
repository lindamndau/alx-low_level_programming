#include "lists.h"
#include <stdlib.h>
/**
 * @Discrption - adds a new node at the end of a listint_t list.
 * @new_node - represents a new node to be added
 * @tmp - Temporary pointer.
 * Returns : new added node
 *
 *
 *
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return NULL;
	}
	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		listint_t *tmp = *head;
		while(tmp -> next != NULL)
		{
			tmp = tmp -> next;
		}
		tmp -> next = new_node;
	}
	return new_node;
}
