#include "lists.h"
/**
 * This function adds new node at the beginning of a listint_t list.
 * @n is the value to be stored in new node.
 * @head is Pointer to a pointer to the head of the list 
 * Returns the address of the new elememnt 
 * Returns NULL if failes
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	if (head == NULL)
	{
		return (NULL);
	}

	new = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;

	new_node->next = *head;

	*head = new_node;

	return (new_node);
}
