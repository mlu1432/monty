#include "monty.h"
/**
 * f_swap - adds the top two elements of the stack.
 * @top: stack head
 * @counter: line_number
 * Return: nothing return
*/
void f_swap(stack_t **top, unsigned int counter)
{
	stack_t *h;
	int len = 0, top;

	h = *top;
	while (h)
	{
		h = h->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can not swap, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*top);
		exit(EXIT_FAILURE);
	}
	h = *top;
	sum = h->n;
	h->n = h->next->n;
	h->next->n = sum;
}
