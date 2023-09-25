#include "lists.h"
#include <stdlib.h>
/**
 * This function frees listsint and sets head to Null.
 */
void free_listint2(listint_t **head)
{
	listint_t *current, *next_node;
	if (head == NULL || *head == NULL)
	{
		return NULL;
	}
	current = *head;
	while(*current != NULL)
	{
		next_node = current->next;
		free(current);
		current = next_node;
	}
	*head = next_node;
}
