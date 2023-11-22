#include "lists.h"
#include <stdlib.h>
/**
 * @Discription - sets the head to NULL.
 * @node - pointer to 
 * Returns: NULL;
 */
void free_listint2(listint_t **head)
{
	listint_t *node;
	listint_t *next_node;

	if (!head)
	{
		return;
	}
	node = *head;
	next_node = (*head)->next;
	while (next_node)
	{
		free(node);
		node = next_node;
		next_node = next_node->next;
	}
	free(node);
	*head = NULL;
}
