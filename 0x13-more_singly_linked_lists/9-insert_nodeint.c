#include "lists.h"
#include <stdlib.h>
/**
 * @Discription - inserts a new node at a given position.
 * @crnt - current node
 * @new-node - new node to be inserted
 * Returns: new_node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;
	listint_t *crnt;
	unsigned int i;
	if(*head == NULL ||idx == 0) 
	{
		return add_nodeint_end(head, n);
	}
	crnt = *head;
	for (i = 0; i < idx - 1; i++)
	{
		if(crnt -> next == NULL)
		{
			return NULL;
		}
		crnt = crnt -> next;
	}
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return NULL;
	}
	new_node->n = n;
	new_node->next = crnt -> next;
	crnt -> next = new_node;
	return new_node;
}
