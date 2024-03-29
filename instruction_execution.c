#include "monty.h"
/**
 * execute - Function to execute an opcode on a stack.
 * @content: Line content that contains the opcode.
 * @top: Pointer to the top node of the linked list representing the stack.
 * @counter: Line counter.
 * @file: Pointer to the monty file.
 * Return: 0 on success, 1 on failure.
 */
int execute(char *content, stack_t **top, unsigned int counter, FILE *file)
{
	instruction_t opst[] = {
				{"push", f_push}, {"pall", f_pall}, {"pint", f_pint},
				{"pop", f_pop},
				{"swap", f_swap},
				{"add", f_add},
				{"nop", f_nop},
				{"sub", f_sub},
				{"div", f_div},
				{"mul", f_mul},
				{"mod", f_mod},
				{"pchar", f_pchar},
				{"pstr", f_pstr},
				{"rotl", f_rotl},
				{"rotr", f_rotr},
				{"queue", f_queue},
				{"stack", f_stack},
				{NULL, NULL}
				};
	unsigned int index = 0;
	char *op;

	op = strtok(content, " \n\t");
	if (op && op[0] == '#')
		return (0);
	bus.arg = strtok(NULL, " \n\t");
	while (opst[index].opcode && op)
	{
		if (strcmp(op, opst[index].opcode) == 0)
		{	opst[index].f(stack, counter);
			return (0);
		}
		index++;
	}
	if (op && opst[index].opcode == NULL)
	{ fprintf(stderr, "L%d: unknown instruction %s\n", counter, op);
		fclose(file);
		free(content);
		free_stack(*stack);
		exit(EXIT_FAILURE); }
	return (1);
}
