#include "lists.h"
/**
 * @discription - reverses a listint_t linked list.
 * @prev - previous node
 * @linker - links
 * Returns - head
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev, *linker;

	if (head == NULL || *head == NULL)
	{
		return (NULL);
	}

	if ((*head)->next == NULL)
	{
		return (*head);
	}
	prev = *head;
	linker = prev->next;
	*head = linker->next;

	prev->next = NULL;

	while ((*head)->next != NULL)
	{
		linker->next = prev;
		prev = linker;
		linker = (*head);
		*head = (*head)->next;
	}

	(*head)->next = linker;
	linker->next = prev;
	return (*head);
}
