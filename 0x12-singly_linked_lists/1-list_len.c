#include "lists.h"
#include <stdio.h>
/*
 * discription- returns the number of elements in a linked list_t list.
 * @tmp - temporary pointer
 * @cnt - count varialbe total elements
 * Returns cnt
 *
 *
 *
 *
 */
size_t list_len(const list_t *h)
{
	size_t cnt = 0;
	const list_t *tmp = h;
	while(tmp != NULL)
	{
		cnt++;
		tmp = tmp -> next;
	}
	return(cnt);
}	
