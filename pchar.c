#include "monty.h"

/**
 * pchar - prints the char at the top of the stack, followed by a new line.
 * @stack: pointer to the top node of the stack
 * @line_number: current line number
 *
 * Return: void
 */

void pchar(stack_t **stack, unsigned int line_number)
{
	int n;

	if (*stack == NULL)
	{
		fprintf(stderr, "L%u: can't pchar, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	n = (*stack)->n;

	if (n > 127)
	{
		fprintf(stderr, "L%u: can't pchar, value out of range\n", line_number);
		exit(EXIT_FAILURE);
	}

	putchar(n);
	putchar('\n');
}
