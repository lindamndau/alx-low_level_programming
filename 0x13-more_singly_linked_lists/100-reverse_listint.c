#include "lists.h"
/**
 *
 *
 *
 *
 *
 *
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *pv = NULL;
	listin_t *crnt = *head;
	listint_t *next;
	while(crnt != NULL)
	{
		next = crnt -> next;
		crnt -> next = pv;
		pv = crnt;
		crnt = next;
	}
	*head = pv;
	return pv;
}
