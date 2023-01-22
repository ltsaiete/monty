#include "monty.h"

/**
 * handleOpcode - Handle opcode of a single line
 * @top: Top of the stack
 * @line_number: Current line number
 *
 * Return: void
 */

void handleOpcode(stack_t **top, unsigned int line_number)
{
	instruction_t *instruction;

	instruction = malloc(sizeof(instruction_t));

	instruction->opcode = getFirstWord(line);

	if (strcmp(instruction->opcode, "push") == 0)
	{
		instruction->f = push;
	}
	else if (strcmp(instruction->opcode, "pall") == 0)
	{
	}
	else
	{
	}
	instruction->f(top, line_number);
}
