include "monty.h"
/**
 * f_add - function adds the top two
 * elements of the stack together.
 * @top: the top of the stack
 * @counter: line_number
 * Return: nothing return
*/
void f_add(stack_t **top, unsigned int counter)
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
		fprintf(stderr, "L%d: can not add, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*top);
		exit(EXIT_FAILURE);
	}
	h = *top;
	sum = h->n + h->next->n;
	h->next->n = sum;
	*top = h->next;
	free(h);
}
