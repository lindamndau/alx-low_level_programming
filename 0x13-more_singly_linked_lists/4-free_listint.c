#include "lists.h"
/**
 * @Discrpition -  frees a listint_t list.
 * @node - pointer of of type listint_t
 * Returns - NULL
 *
 *
 *
 */
void free_listint(listint_t *head)
{
	listint_t *node;
	listint_t *next_node;

	if (head)
	{
		node = head;
		next_node = head->next;
		while (next_node)
		{
			free(node);
			node = next_node;
			next_node = next_node->next;
		}
		free(node);
	}
}
