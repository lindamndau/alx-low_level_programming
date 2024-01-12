#include "lists.h"
#include <stdlib.h>
/**
 * @Discription - inserts node at given position by index
 * @iterator - iterates through nodes in list
 * @tmp - temporary node
 * Returns - new_node 
 *
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int iterator = 0;
	dlistint_t *new_node = malloc(sizeof(dlistint_t)), *tmp = *h;	
	if(new_node)
	{
		new_node -> n = n; 
		if(idx == 0)
		{
			if(*h)
			{
				new_node -> next = *h;
				(*h) -> prev = new_node;
			}
			*h = new_node;
			return new_node;
		}
		while(iterator < idx - 1 && tmp)
		{
			tmp = tmp -> next;
			iterator++;
		}
		if(tmp)
		{
			if(tmp -> next)
			{
				tmp -> next -> prev = new_node;
			}
			new_node -> next = tmp -> next;
			new_node -> prev = tmp;
			new_node -> next = new_node;
			return new_node;
		}
	}
	return NULL;
}
