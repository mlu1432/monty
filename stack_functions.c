#include "monty.h"
/**
 * addnode - function adds a new node to the top of the stack
 * @top: pointer to the top of the stack
 * @n: value of the new node
 * Return: no return
*/
void addnode(stack_t **top, int n)
{

	stack_t *new_node, sum

	sum = *top;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{ printf("Error\n");
		exit(0); }
	if (sum)
		sum->prev = new_node;
	new_node->n = n;
	new_node->next = *top;
	new_node->prev = NULL;
	*top = new_node;
}
