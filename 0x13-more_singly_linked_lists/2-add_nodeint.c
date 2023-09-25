#include "lists.h"
#include <stdlib.h>
/**
 * This function adds new node at the beginning of a listint_t list.
 * @n is the value to be stored in new node.
 * @head is Pointer to a pointer to the head of the list 
 * Returns the address of the new elememnt 
 * Returns NULL if failes
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t  *node1;
	node1 = maloc(sizeof(listint_t));
	if(node1 == NULL)
	{
		return NULL;
	}
	node1 ->n = n;
	node1 ->next = *head;
	*head = node1;
	return node1;
}
