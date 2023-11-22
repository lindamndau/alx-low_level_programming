#include "lists.h"
#include <stdlib.h>
/**
 * @Discription -  returns the sum of all the data (n) of a listint_t linked list.
 * @sum - sum of all n data
 * Returns - sum of all data
 *
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *tmp = head;
	while(tmp)
	{
		sum += tmp -> n;
		tmp = tmp -> next;
	}
	free(tmp);
	return sum;
}
