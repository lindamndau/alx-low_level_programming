#include "lists.h"
#include <stdlib.h>
/**
 * @discription -  deletes the head node of a listint_t linked list, and returns the head node’s data (n).
 * @tmp - temporary pointer of type listint_t
 * @free - free's tmp
 * @d - delete variable
 * Returns : @d
 *
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int d;
	if(*head == NULL)
	{
		return 0;
	}
	d = (*head) -> n;
	tmp = *head;
	*head = (*head) -> next;
	free(tmp);
	return d;
}
