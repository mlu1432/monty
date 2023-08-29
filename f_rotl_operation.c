#include "monty.h"
/**
  *f_rotl- function moves the top of the stack to the bottom
  *@top: top of the stack
  *@counter: line_number
  *Return: nothing return
 */
void f_rotl(stack_t **top, unsigned int counter)
{
	stack_t *tmp = *top, *sum;

	if (*top == NULL || (*top)->next == NULL)
	{
		return;
	}
	sum = (*top)->next;
	sum->prev = NULL;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = *top;
	(*top)->next = NULL;
	(*top)->prev = tmp;
	(*top) = sum;
}
