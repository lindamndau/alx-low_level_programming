#include "lists.h"
/**
 * This function reverses a listint_t linked list.
 * @head: Pointer to a pointer to the head of the list.
 *
 * Returns: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prv = NULL;
	listint_t *current = *head;
	listint_t *next = NULL;
	while (current != NULL)
	{
		next = current->next;
		current->next = prv;
		prv = current;
		current = next;
	}
	*head = prv;
	return prv;
}
