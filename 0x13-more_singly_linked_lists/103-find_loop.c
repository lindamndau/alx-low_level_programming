#include "lists.h"
/**
 *
 *
 *
 *
 *
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *s = head;
	listint_t *f = head;
	while(f && f -> next)
	{
		s = s -> next;
		f = f -> next -> next;
		if(s == f)
		{
			break
		}
	}
	if(!f || !f -> next)
	{
		return NULL;
	}
	s = head;
	while(s != f)
	{
		s = s -> next;
		f = f -> next;
	}
	return s;
}
