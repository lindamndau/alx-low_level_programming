#include "lists.h"
#include <stdlib.h>
/**
 * This function that adds a new at the end of a listint_t list.
 * Returns the address of a new element.
 * Returns NULL if ti failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node1, *tmp;
	node1 = malloc(sizeof(listint_t));
	if(node1 === NULL)
	{
		return NULL:
	}
	node1->n = n;
	node1->next = NULL;
	if(*head == NULL)
	{
		*head = node1;
	}
	else
	{
		tmp = *head;
		while(tmp->next != NULL)
		{
			tmp = tmp->next;
		}
	tmp->next = node1;
	}
	return node1;
}
