#include "lists.h"
#include <stdlib.h>
/**
 * @Discription - deletes node in list, accessed by index
 * @prev_node - previous node
 * @tmp - temporary pointer
 * Returns - new_list(deleted node)
 *
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *prev_node = *head, *tmp = *head;

	if (index == 0 && *head)
	{
		if ((*head)->next)
		{
			*head = (*head)->next;
			(*head)->prev = NULL;
			free(tmp);
		}
		else
			*head = NULL;
		return (1);
	}
	while (i < index - 1 && prev_node)
	{
		prev_node = prev_node->next;
		i++;
	}
	if (prev_node)
	{
		tmp = prev_node->next;
		if (tmp -> next)
		{
			tmp ->next->prev = prev_node;
		}
		prev_node->next = tmp -> next;
		free(tmp);
		return (1);
	}
	return (-1);
}
