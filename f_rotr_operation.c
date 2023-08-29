#include "monty.h"
/**
  *f_rotr- rotates the stack to the bottom
  *@head: stack top
  *@counter: line_number
  *Return: nothing return
 */
void f_rotr(stack_t **top, unsigned int counter)
{
	stack_t *copy;

	copy = *top;
	if (*head == NULL || (*top)->next == NULL)
	{
		return;
	}
	while (copy->next)
	{
		copy = copy->next;
	}
	copy->next = *top;
	copy->prev->next = NULL;
	copy->prev = NULL;
	(*top)->prev = copy;
	(*top) = copy;
}
