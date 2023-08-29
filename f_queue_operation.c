#include "monty.h"
/**
 * f_queue - function prints the top of the stack
 * @top: the head of the stack
 * @counter: line_number
 * Return: nothing return
*/
void f_queue(stack_t **top, unsigned int counter)
{
	(void)top;
	(void)counter;
	bus.lifi = 1;
}

/**
 * addqueue - function adds a new node
 * to the end of the stack
 * @n: value of the new node
 * @top: top of the stack
 * Return: no return
*/
void addqueue(stack_t **top, int n)
{
	stack_t *new_node, *sum;

	sum = *top;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		printf("Error\n");
	}
	new_node->n = n;
	new_node->next = NULL;
	if (sum)
	{
		while (sum->next)
			sum = sum->next;
	}
	if (!top)
	{
		*top = new_node;
		new_node->prev = NULL;
	}
	else
	{
		sum->next = new_node;
		new_node->prev = sum;
	}
}
