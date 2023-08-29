#include "monty.h"
/**
 * f_pint - function shows the top of the stack
 * @top:  the top of the stack
 * @counter: line_number
 * Return: nothing return
*/
void f_pint(stack_t **top, unsigned int counter)
{
	if (*top == NULL)
	{
		fprintf(stderr, "L%u: can not pint, stack empty\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*top);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*top)->n);
}
