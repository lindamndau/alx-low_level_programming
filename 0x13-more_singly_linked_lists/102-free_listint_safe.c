#include "lists.h"
#include <stdlib.h>
/**
 * @Discription -  frees a listint_t list.
 * @tmp - Temporary pointer
 * @ Returns: i counter
 *
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *tmp;
	size_t i;
	if (h == NULL || *h == NULL)
    	{
        	return (0);
    	}
	tmp = *h;
	for (i = 0; tmp != NULL; i++)
    	{	
       		tmp = tmp->next;
        	free(*h);
        	*h = tmp;
    	}
    	return (i);
}
