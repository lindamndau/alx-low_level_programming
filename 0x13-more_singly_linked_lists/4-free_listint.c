#include "lists.h"
/**
 * @Discrpition -  frees a listint_t list.
 * @tmp - Temporary pointer of of type listint_t
 * Returns - NULL
 *
 *
 *
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;
	while (head != NULL)
	{
		tmp = head;
		head = head->next;
	}
	free (tmp);
}
