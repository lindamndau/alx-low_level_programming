#include "lists.h"
#include <stdlib.h>

/**
 * free_list - destroy list
 * @head: list header
 * @ptr - Pointer for list_t
 */
void free_list(list_t *head)
{
	list_t *ptr = NULL;

	while (head)
	{
		ptr = head;
		head = head->next;
		free(ptr->str);
		free(ptr);
	}
}
