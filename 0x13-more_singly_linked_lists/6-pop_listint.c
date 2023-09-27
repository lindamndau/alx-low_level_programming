#include "lists.h"

/**
 * This function deletes the head node of a listint_t linked list, and returns the head node’s data (n)
 * Returns: The data (n) of the deleted head node, or 0 if the list is empty.
 */
int pop_listint(listint_t **head)
{
	int num;
	listint_t *ptr = *head;

	if (head == NULL || *head == NULL)
	{
		return (0);
	}
	*head = ptr->next;

	num = ptr->n;

	free(ptr);

	return (num);
}
