#include "main.h"
#include <stdio.h>
/**
 * This  function that returns the number of elements in a linked list_t list
 *
 *
 *
 *
 */
size_t list_len(const list_t *h)
{
	size_t n_nodes = 0;

	if (!h)
	{
		return (0);
	}

	while (h)
	{
		n_nodes++;
		h = h->next;
	}
	return (n_nodes);
}
