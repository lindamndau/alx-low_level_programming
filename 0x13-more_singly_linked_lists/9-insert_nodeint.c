#include "lists.h"
/**
 *
 *
 *
 *
 *
 *
 *
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	if(idx == 0)
	{
		return add_nodeint_end(head, n);
	}
	listint_t *tmp = *head;
	unsigned int j = 0;
	while(tmp != NULL && i < idx -1)
	{
		tmp = tmp -> next;
		i++;
	}
	if(tmp == NULL)
	{
		return NULL;
	}
	listint_t *new_node = malloc(sizeof(listint_t));
	if(new_node == NULL)
	{
		return NULL;
	}
	new_node -> n = n;
	new_node -> next = tmp -> next;
	tmp -> next = new_node;
	return new_node;
}


