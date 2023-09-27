#include "lists.h"
/**
 * This function frees a listint_t list.
 * @h: Pointer to a pointer to the head of the list
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *current, *ptr, *head;
	size_t i, k;

	if (h == NULL || *h == NULL)
	{
		return (0);
	}
	current = *h;
	head = *h;
	k = 0;

	while (head != NULL)
	{
		ptr = *h;
		for (k = 0; k < i; k++)
		{
			if (ptr == current)
			{
				*h = NULL;
				return (i);
			}
			ptr = ptr->next;
		}
		current = head->next;
		free(head);
		head = current;
		i++;
	}
	*h = NULL;
	return (i);
}
