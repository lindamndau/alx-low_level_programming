#include "lists.h"

/**
 * This function deletes the head node of a listint_t linked list, and returns the head node’s data (n)
 * Returns: The data (n) of the deleted head node, or 0 if the list is empty.
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *tmp;
	if (head == NULL)
	{
		return(0);
	}
	data = (*head)->n;
	tmp = *head;
	*head = (*head)->next;
	free(tmp);
	returni(data);
}
