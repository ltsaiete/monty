#include "monty.h"

/**
 * _sub -  subtracts the top element of the stack from
 * the second top element of the stack.
 * @stack: pointer to the top node of the stack
 * @line_number: current line number
 *
 * Return: void
 */

void _sub(stack_t **stack, unsigned int line_number)
{
	stack_t *sub;

	if (*stack == NULL)
	{
		fprintf(stderr, "L%u: can't sub, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	else if ((*stack)->next == NULL)
	{
		fprintf(stderr, "L%u: can't sub, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	sub = malloc(sizeof(stack_t));
	if (sub == NULL)
	{
		fprintf(stderr, "Error: malloc failed");
		exit(EXIT_FAILURE);
	}

	sub->n = (*stack)->next->n - (*stack)->n;
	sub->next = (*stack)->next->next;

	free((*stack)->next);
	free(*stack);

	*stack = sub;
	sub = NULL;
}
