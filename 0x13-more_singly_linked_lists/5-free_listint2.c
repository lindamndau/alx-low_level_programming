#include "lists.h"
/**
 * This function frees listsint and sets head to Null.
 */
void free_listint2(listint_t **head)
{
	listint_t *ptr
	if (head == NULL)
	{
		return NULL;
	}
	while(*head)
	{
		ptr = (*head)->next;
		free(*head)
		*head = ptr;
	}
	*head = NULL;
}
