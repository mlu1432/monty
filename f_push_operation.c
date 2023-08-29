#include "monty.h"
/**
 * f_push - function adds a new node to the stack
 * @top: the top of the stack
 * @counter: line_number
 * Return: nothing return
*/
void f_push(stack_t **top, unsigned int counter)
{
	int n, arg_index = 0, flag = 0;

	if (bus.arg)
	{
		if (bus.arg[0] == '-')
			arg_index++;
		for (; bus.arg[arg_index] != '\0'; arg_index++)
		{
			if (bus.arg[arg_index] > 57 || bus.arg[arg_index] < 48)
				flag = 1; }
		if (flag == 1)
		{ fprintf(stderr, "L%d: usage: push integer\n", counter);
			fclose(bus.file);
			free(bus.content);
			free_stack(*top);
			exit(EXIT_FAILURE); }}
	else
	{ fprintf(stderr, "L%d: usage: push integer\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*top);
		exit(EXIT_FAILURE); }
	n = atoi(bus.arg);
	if (bus.lifi == 0)
		addnode(top, n);
	else
		addqueue(top, n);
}
