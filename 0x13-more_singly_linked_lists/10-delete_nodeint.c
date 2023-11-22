#include "lists.h"
/**
 * @Discription -  deletes the node at index index of a listint_t linked list.
 * @current - current node
 * @tmp - Temporary node
 * Returns : 1
 *
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp;
	listint_t *current;
	unsigned int i;
	if (*head == NULL || index == 0)
	{
		return (-1);
	}
	current = *head;
	for (i = 0; i < index - 1; i++)
	{
		if (current->next == NULL)
		{
			return (-1);
		}
		current = current->next;
	}
	tmp = current->next;
	current->next = tmp->next;
	free(tmp);
	return (1);
}
