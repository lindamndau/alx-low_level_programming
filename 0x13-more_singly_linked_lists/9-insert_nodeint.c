#include "lists.h"

/**
 * Description: inserts a new node at a given position
 * insert_nodeint_at_index - function with 3 arguments
 * @head: pointer to head pointer of first node in linked list
 * @idx: index of list
 * @n: value integer
 *
 * Return: address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tmp, *ptr;
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);

	tmp = malloc(sizeof(listint_t));
	if (tmp == NULL)
	{
		return (NULL);
	}
	tmp->n = n;
	ptr = *head;

	if (idx == 0)
	{
		tmp->next = *head;
		*head = tmp;
		return (*head);
	}

	while (ptr != NULL)
	{
		if (count == idx - 1)
		{
			tmp->next = ptr->next;
			ptr->next = tmp;
		}
		count++;
		ptr = ptr->next;
	}
	if (idx > count)
		return (NULL);
	return (tmp);

}
