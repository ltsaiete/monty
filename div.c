#include "monty.h"

/**
 * _div -  divides the second top element of the stack
 * by the top element of the stack.
 * @stack: pointer to the top node of the stack
 * @line_number: current line number
 *
 * Return: void
 */

void _div(stack_t **stack, unsigned int line_number)
{
	stack_t *div;

	if (*stack == NULL)
	{
		fprintf(stderr, "L%u: can't div, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	else if ((*stack)->next == NULL)
	{
		fprintf(stderr, "L%u: can't div, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	if ((*stack)->n == 0)
	{
		fprintf(stderr, "L%u: division by zero", line_number);
		exit(EXIT_FAILURE);
	}

	div = malloc(sizeof(stack_t));
	if (div == NULL)
	{
		fprintf(stderr, "Error: malloc failed");
		exit(EXIT_FAILURE);
	}

	div->n = (*stack)->next->n / (*stack)->n;
	div->next = (*stack)->next->next;

	free((*stack)->next);
	free(*stack);

	*stack = div;
	div = NULL;
}
