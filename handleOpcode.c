#include "main.h"

/**
 * handleOpcode - Handle opcode of a single line
 * @top: Top of the stack
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
		printf("op pall\n");
	}
	else
	{
		printf("no op\n");
	}
	instruction->f(top, line_number);
}
