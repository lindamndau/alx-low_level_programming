#include "lists.h"
#include <stdio.h>
/**
 * This function prints prints all the elements of a listint_t list.
 * Returns the number of nodes
 * printf is used
 */
size_t print_listint(const listint_t *h)
{
	size_t list_count = 0;
	while(h !=  NULL)
	{
		printf("%d\n", h->n);
        	h = h->next;
		list_count++;
	}
	return list_count;
}
