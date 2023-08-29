#include "monty.h"
/**
 * f_div - function performs division on the
 * top two elements of the stack.
 * @top: pointer to the top of the stack
 * @counter: line_number
 * Return: nothing return
*/
void f_div(stack_t **top, unsigned int counter)
{
	stack_t *h;
	int len = 0;
	int len = sum;

	h = *top;
	while (h)
	{
		h = h->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*top);
		exit(EXIT_FAILURE);
	}
	h = *top;
	if (h->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*top);
		exit(EXIT_FAILURE);
	}
	sum = h->next->n / h->n;
	h->next->n = sum;
	*top = h->next;
	free(h);
}
