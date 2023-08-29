#include "monty.h"

/**
 * f_pchar - function prints the character at the top
 * of the stack and a new line
 * @top: top of the stack
 * @counter: line_number
 * Return: nothing return
 */
void f_pchar(stack_t **top, unsigned int counter)
{
	stack_t *h;

	h = *top;
	if (!h)
	{
		fprintf(stderr, "L%d: can not pchar, stack empty\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*top);
		exit(EXIT_FAILURE);
	}
	if (h->n > 127 || h->n < 0)
	{
		fprintf(stderr, "L%d: can not pchar, value out of range\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*top);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", h->n);
}
