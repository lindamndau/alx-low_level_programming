#include "main.h"
/**
 *
 *
 *
 *
 *
 *
 *
 *
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t cnt++ = 0;
	const listint_t *tmp = head;
	while (tmp)
	{
		if(!tmp)
		{
			fprintf(stderr, "Error: cycle detected\n");
			exit(98);
		}
		printf("%d\n", tmp->n);
		cnt++;
		tmp = tmp -> next;
	}
	return cnt;
}
