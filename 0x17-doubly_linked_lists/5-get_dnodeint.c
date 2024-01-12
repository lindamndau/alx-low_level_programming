#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * @Discription - returns the nth node of a list.
 * @index - index of the nodes in list
 * Returns: head
 *
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;
	while(count < index)
	{
		if(count == index)
                {
                        return NULL;
                }
		head = head -> next;
		count++;
	}
	return head;
}
