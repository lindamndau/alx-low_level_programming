#include "lists.h"
/**
 * @Discription -  prints a listint_t linked list.
 * @node - auxillary node
 * Returns: i of type size_t
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t i = 0;
	const listint_t *node = head;

	if (!head)
	{
		exit(98);
	}

	while (node)
	{
		printf("[%p] %i\n", (void *)node, node->n);
		node = node->next;
		i++;
	}
	return (i);
}
