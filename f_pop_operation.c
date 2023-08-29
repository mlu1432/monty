#include "monty.h"
/**
 * f_pop - removes the top element of the stack
 * @top: pointer to the top node of the stack
 * @counter: line number in the monty file
 * Return: no return value
 */
void f_pop(stack_t **top, unsigned int counter)
{
	stack_t *h;

	if (*top == NULL)
	{
		fprintf(stderr, "L%d: can not pop an empty stack\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*top);
		exit(EXIT_FAILURE);
	}
	h = *top;
	*top = h->next;
	free(h);
}
