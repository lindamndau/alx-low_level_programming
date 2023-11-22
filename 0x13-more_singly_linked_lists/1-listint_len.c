#include "lists.h"
/**
 * @Discription -  returns the number of elements in a linked listint_t list.
 * @count - number of elements of size_t
 * Returns: number of elemnts
 *
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;
	while(h)
	{
		count++;
		h = h -> next;
	}
	return count;
}
