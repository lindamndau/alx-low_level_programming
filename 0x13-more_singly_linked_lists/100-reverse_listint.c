#include "lists.h"
/**
 * This function reverses a listint_t linked list.
 * @head: Pointer to a pointer to the head of the list.
 *
 * Returns: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *tmp1 = NULL, *tmp2 = NULL;

	if (head == NULL || *head == NULL)
	{
		return (NULL);
	}

	while (*head != NULL)
	{
		tmp1 = (*head)->next;
		(*head)->next = tmp2;
		tmp2 = *head;
		*head = tmp1;
	}

	*head = tmp2;

	return (*head);
}
