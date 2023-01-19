#include "main.h"

/**
 * handleOpcode - Handle opcode of a single line
 * @line: The line
 * @arg2: description of the argument
 *
 * Return: void
 */

void handleOpcode(char *line)
{
	char *op;

	op = getFirstWord(line);
	/**
	 * Build switch-case
	 * build functions to handle the instructions
	 * handle the intructions inside switch case using the functions and
	 * struct instruction_t
	 */

	if (strcmp(op, "push") == 0)
	{
		
	}
	else if (strcmp(op, "pall") == 0)
	{
		printf("op pall\n");
	}
	else
	{
		printf("no op\n");
	}
}
