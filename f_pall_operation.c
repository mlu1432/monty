#include "monty.h"
/**
 * f_pall - function prints the stack
 * @top: stack top
 * @counter: not used
 * Return: nothing return
*/
void f_pall(stack_t **top, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *top;
	if (h == NULL)
		return;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
