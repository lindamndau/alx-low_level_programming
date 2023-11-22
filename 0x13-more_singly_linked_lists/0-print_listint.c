#include "lists.h"
/**
 * @Discription - prints all the elements of a listint_t list.
 * @count - Counts all elements and returns size_t
 * Returns: Total count of elements
 *
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *node = h;
	size_t count = 0;

	while (node)
	{
		printf("%i\n", node->n);
		count++;
		node = node->next;
	}

	return (count);
}
