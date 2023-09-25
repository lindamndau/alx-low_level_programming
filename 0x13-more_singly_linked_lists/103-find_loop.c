#include "lists.h"
/**
 * This function find_listint_loop - Finds the loop in a linked list.
 * @head: Pointer to the head of the list.
 * Return: The address of the node where the loop starts, or NULL if there is no loop.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slowPtr, *fastPtr;
	slowPtr = fastPtr = head;

	while (slowPtr != NULL && fastPtr != NULL && fastPtr->next != NULL)
	{
		slowPtr = slowPtr->next;
		fastPtr = fastPtr->next->next;
		if (slowPtr == fastPtr)
		{
			slowPtr = head;
			while (slowPtr != fastPtr)
			{
				slowPtr = slowPtr->next;
				fastPtr = fastPtr->next;
			}
			return slowPtr;
		}
	}
	return NULL;
}
