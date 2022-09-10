#include "monty.h"
/**
 * addnode - adds node to the head of the stack
 * @head: head of the stack
 * @n: new_value
 * Return: nothing
 */

void addnode(stack_c **head, int n)
{
	stack_t *new_node, *aux;

	aux = *head; /*assign head pointer to aux/temp var */
	new_node = malloc(sizeof(stack_t)); /* allocate memory to new_node */
	if (new_node == NULL) /* if malloc doesn't work, print error */
	{
		printf("Error\n");
		exit(0);
	}

	if (aux) /* aux has a variable i.e *head */
		aux->prev = new_node; /*if aux exists prev val equals new node*/
	new_node->n = n;  /* assign value to new_node*/
	new_node->next = *head; /* assign head pointer to new node*/
	new_node->prev = NULL; /* link prev to new node which has NULL val */
	*head = new_node; /* make new node the head*/
}
