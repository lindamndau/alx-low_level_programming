#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * discription - adds a new node at the beginning of a list_t list
 * @new_node - Pointer to new node
 * @ frees allocated node
 * Returns: new node of type list_t
 *
 *
 *
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t * new_node;
	if (str == NULL)
	{
        	return NULL;
	}
	new_node = (list_t *)malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return NULL;
	}
	new_node->str = strdup(str);
	if (new_node->str == NULL)
    	{
        	free(new_node);
        	return NULL;
    	}
	new_node->next = *head;
	*head = new_node;
	return new_node;
}
