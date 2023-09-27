#include "lists.h"
/**
 * This function that adds a new at the end of a listint_t list.
 * Returns the address of a new element.
 * Returns NULL if ti failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *tmp, *ptr;

	tmp = malloc(sizeof(listint_t));
	if (tmp == NULL)
	{
		return (NULL);
	}

	tmp->next = NULL;
	tmp->n = n;

	if (*head)
	{
		ptr = *head;
		while (ptr->next != NULL)
			ptr = ptr->next;
		ptr->next = tmp;
	}
	else
	{
		*head = tmp;
	}
	return (tmp);
}
