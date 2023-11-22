#include "lists.h"
#include <stdlib.h>
/**
 * @ Discription -  returns the nth node of a listint_t linked list.
 * @ tmp - Temporary pointer
 * Returns - tmp
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp = head;
	unsigned int j;
	if(head == NULL)
	{
		return NULL;
	}
	for(j = 0; j < index; j++)
	{
		if(tmp == NULL)
		{
			return NULL;
		}
		tmp = tmp -> next;
	}
	return tmp;
}
