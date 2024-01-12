#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * @Discription - sums all data of (n) in a list
 * @Returns sum (SUCCESS)
 * Returns 0 if list is empty(FAILURE)
 *
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	while(head != NULL)
	{
		sum += head -> n;
		head = head -> next;
	}
	return sum;
}
