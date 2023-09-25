#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * This function prints prints a listint_t linked list
 * @head: Pointer to the head of the list.
 * Returns: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current = head;
	size_t count = 0;
	const listint_t *loop_node = NULL;
	while (current != NULL)
	{
		printf("[%p] %d\n", (void *)current, current->n);
		count++;
		if (current->next >= current)
		{
			loop_node = current->next;
			break;
		}
		current = current->next;
	}
	if (loop_node != NULL)
	{
		printf("-> [%p] %d\n", (void *)loop_node, loop_node->n);
		exit(98);
	}
	return (count);
}
