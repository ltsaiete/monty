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
	int i = 0;
	instruction_t allInstructions[12] = {
			{"push", push},
			{"pall", pall},
			{"pint", pint},
			{"pop", pop},
			{"swap", swap},
			{"add", add},
			{"nop", nop},
			{"sub", sub},
			{"div", div},
			{"mul", mul},
			{"mod", mod},
			{NULL, NULL}};
	instruction_t *currentInstruction;

	currentInstruction = malloc(sizeof(instruction_t));

	currentInstruction->opcode = getFirstWord(line);

	while (allInstructions[i].opcode != NULL)
	{
		if (strcmp(currentInstruction->opcode, allInstructions[i].opcode) == 0)
		{
			currentInstruction->f = allInstructions[i].f;
			break;
		}
		i++;
	}

	if (allInstructions[i].opcode == NULL)
	{
		printf("L%u: unknown instruction <opcode>\n", line_number);
		exit(EXIT_FAILURE);
	}
	currentInstruction->f(top, line_number);
	free(currentInstruction->opcode);
	free(currentInstruction);
}
