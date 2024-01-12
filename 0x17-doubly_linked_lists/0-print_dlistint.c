#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * @Discription - Prints elements of a list.
 * @count - iterator
 * @Return count of size_t
 *
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;
	while(h != NULL)
	{
		printf("%d\n", h -> n);
		h = h -> next;
		count++;
	}
	return count;
}
