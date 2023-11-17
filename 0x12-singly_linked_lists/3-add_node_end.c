#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * discription - adds a new node at the end of a list_t list.
 * @str
 * @tmp - trmporary pointer
 * @ptr - cursor
 * @len - total lentgh of string
 * Returns : void
 *
 *
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *tmp, *ptr;
	unsigned int len = 0;
	tmp = malloc(sizeof(list_t));
	if (tmp)
	{
		while (*(str + len))
		{
			len++;
		}
		tmp->str = strdup(str);
		if (tmp->str)
		{
			tmp->len = len;
			tmp->next = NULL;
			if (!*head)
			{
				*head = tmp;
				return (tmp);
			}
			ptr = *head;
			while (ptr->next)
			{
				ptr = ptr->next;
			}
			ptr->next = tmp;
			return (tmp);
		}
		free(tmp);
		return (NULL);
	}
	return (NULL);
}
