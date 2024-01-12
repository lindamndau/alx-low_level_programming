#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * @
 *
 *
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_mem, *last_list;

	new_mem = malloc(sizeof(dlistint_t));

	if (new_mem == NULL)
	{
		return (NULL);
	}

	new_mem->n = n;
	new_mem->next = NULL;
	new_mem->prev = NULL;
	if (*head == NULL)
	{
		*head = new_mem;
		return (new_mem);
	}
	last_list = *head;

	while (last_list->next != NULL)
	{
		last_list = last_list->next;
	}
	last_list->next = new_mem;
	new_mem->prev = last_list;

	return (new_mem);
}
