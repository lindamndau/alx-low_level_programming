#include "lists.h"
/**
 * This function frees listint_t
 * @n: Value to be stored in the new node.
 * @head: Pointer to a pointer to the head of the list.
 */
void free_listint(listint_t *head)
{
	listint_t *ptr
	while (head)
	{
		ptr = head->next;
		free(head);
		head = ptr;
	}
}
