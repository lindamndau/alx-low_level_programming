#include "lists.h"
#include <stdlib.h>
/**
 * @Discription
 * @tmp - temporary pointer
 * Returns: NULL;
 */
void free_listint2(listint_t **head)
{
	listint_t * tmp;
	if(head == NULL || *head == NULL)
	{
		return;
	}
	while(*head != NULL)
	{
		tmp = (*head) -> next;
		*head = tmp;
	}
	free(head);
	*head = NULL;
}
