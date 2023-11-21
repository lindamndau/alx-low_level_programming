#include "lists.h"
/**
 *
 *
 *
 *
 *
 *
 */
size_t free_listint_safe(listint_t **h)
{
	size_t size = 0;
	listint_t *crnt;
	if(!h || *h)
	{
		return 0;
	}
	crnt = *h;
	while(crnt)
	{
		listint_t *tmp = crnt -> next;
		free (crnt);
		crnt = tmp;
		size++;
	}
	*h = NULL;
	return size;
}
