#include "monty.h"
/**
 * free_stack - this will free a doubly linked list
 * @head: head of the stack
 */
void free_stack(stack_t *head)
{
	stack_t *aux;   /* aux can also be called temp */

	aux = head;   /*store head into aux/temp variable */
	while (head) /* while head is not NULL */
	{
		aux = head->next;
		free(head);
		head = aux;
	}
}
