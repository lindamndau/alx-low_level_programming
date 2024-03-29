#include "lists.h"
/**
 * @Discription -  Returns total elements in a list.
 * @Count - iterator
 * Return count of size_t
 *
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;
	while(h != NULL)
	{
		h = h -> next;
		count++;
	}
	return count;
}
