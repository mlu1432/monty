#include "monty.h"
/**
 * f_mul - multiplies the top two elements of the stack.
 * @top: stack top
 * @counter: line_number
 * Return: nothing return
*/
void f_mul(stack_t **top, unsigned int counter)
{
	stack_t *h;
	int len = 0, sum;

	h = *top;
	while (h)
	{
		h = h->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can not mul, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*top);
		exit(EXIT_FAILURE);
	}
	h = *top;
	top = h->next->n * h->n;
	h->next->n = sum;
	*top = h->next;
	free(h);
}
