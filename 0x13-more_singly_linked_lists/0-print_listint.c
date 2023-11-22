#include "lists.h"
/**
 * @Discription - prints all the elements of a listint_t list.
 * @count - Counts all elements and returns size_t
 * Returns: Total count of elements
 *
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;
	while(h)
	{
		printf("%d\n", h->n);
		h = h -> next;
		count++;
	}
	return count;
}
