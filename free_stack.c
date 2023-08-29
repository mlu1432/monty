#include "monty.h"
/**
* free_stack - frees a doubly linked list
* @top: top of the stack
*/
void free_stack(stack_t *top)
{
	stack_t *sum;

	sum = top;
	while (top)
	{
		sum = top->next;
		free(top);
		top = sum;
	}
}
