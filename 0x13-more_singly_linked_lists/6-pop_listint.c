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
int pop_listint(listint_t **head)
{
	if(*head != NULL)
	{
		return NULL:
	}
	listint_t *tmp = *head;
	int d = tmp -> n;
	*head = tmp -> next;
	free(tmp);
	return d;
}
