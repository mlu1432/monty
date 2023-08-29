#include "monty.h"

/**
 * f_sub - subtracts the top element of the stack from the second top element
 * @top: pointer to the top node of the stack
 * @counter: line number in the monty file
 * Return: no return value
 */
void f_sub(stack_t **top, unsigned int counter)
{
	stack_t *sum;
	int sus, nodes;

	sum = *top;
	for (nodes = 0; sum != NULL; nodes++)
		sum = sum->next;
	if (nodes < 2)
	{
		fprintf(stderr, "L%d: can not sub, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*top);
		exit(EXIT_FAILURE);
	}
	sum = *top;
	sus = sum->next->n - sum->n;
	sum->next->n = sus;
	*top = sum->next;
	free(sum);
}
