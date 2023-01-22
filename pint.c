#include "monty.h"

/**
 * pint - prints the value at the top of the stack
 * @stack: pointer to the top node of the stack
 * @line_number: current line number
 *
 * Return: void
 */

void pint(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL)
	{
		printf("L%u: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}

	printf("%d\n", (*stack)->n);
}
