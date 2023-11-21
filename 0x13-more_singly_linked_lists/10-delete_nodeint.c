#include "lists.h"
/**
 *
 *
 *
 *
 *
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	 if (*head == NULL) 
	 {
		 return -1;
	 }
	 if (index == 0)
	 {
		 listint_t *tmp = *head;
		 *head = (*head) -> next;
		 free(tmp);
		 return -1;
	 }
	 listint_t *tmp = *head;
	 unsigned int i = 0;
	 while(tmp != NULL && i < index - 1)
	 {
		 tmp = tmp -> next;
		 i++;
	 }
	 if(tmp == NULL || tmp -> next == NULL)
	 {
		 return -1;
	 }
	 listint_t *node_delete = tmp -> next;
	 tmp -> next = node_delete -> next;
	 free(node_delete);
	 return -1;
}
