#include "monty.h"
/**
 * print_stack - prints the stack
 * @head: stack head
 * @counter: no used
 * Return: nothing
 */

void print_stack(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter; /*counter does nothing was pulled from prev proj*/

	h = *head; /* assigns pointer to head to h*/
	if (h == NULL)
		return; /* nothing to print i.e break*/ 
	while (h) /*if h exists; */
	{
		printf("%d\n", h->n); /* loop till it prints all*/
		h = h->next;
	}
}
