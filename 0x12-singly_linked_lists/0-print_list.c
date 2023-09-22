#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * This function prints all the elements of a list_t list
 * Return: the number of nodes
 * Format: see example
 * If str is NULL, print [0] (nil)
 * You are allowed to use printf
 */
size_t print_list(const list_t *h)
{
	size_t n_nodes = 0;

	if (!h)
		return (0);

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		n_nodes++;
	}
	return (n_nodes);
}
