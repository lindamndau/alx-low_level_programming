#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * @Discription - frees memory
 * @node - node in list to be freed
 *
 *
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *node;

	while (head != NULL)
	{
		node = head->next;
		free(head);
		head = node;
	}
}
