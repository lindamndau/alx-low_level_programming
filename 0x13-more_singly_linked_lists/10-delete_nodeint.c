#include "lists.h"
#include <stdlib.h>
/**
 * This function deletes the node at index index of a listint_t linked list.
 * @head: Pointer to a pointer to the head of the list.
 * @index: Index of the node to be deleted (starting at 0)
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	 unsigned int i;
	 listint_t *current, *tmp;
	 if (head == NULL || *head == NULL)
	 {
		 return (-1);
	 }
	 current = *head;
	 if (index == 0)
	 {
		 *head = current->next;
		 free(current);
		 return (1);
	 }
	 for (i = 0; current != NULL && i < index - 1; i++)
	 {
		 current = current->next;
	 }
	 if (i == index - 1 && current != NULL)
	 {
		 tmp = current->next;
		 current->next = tmp->next;
		 free(tmp);
		 return (1);
	 }
	 return (-1);
}
