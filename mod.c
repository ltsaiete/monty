#include "monty.h"

/**
 * mod -  computes the rest of the division of the second top element of
 * the stack by the top element of the stack.
 * @stack: pointer to the top node of the stack
 * @line_number: current line number
 *
 * Return: void
 */

void mod(stack_t **stack, unsigned int line_number)
{
	stack_t *mod;

	if (*stack == NULL)
	{
		fprintf(stderr, "L%u: can't mod, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	else if ((*stack)->next == NULL)
	{
		fprintf(stderr, "L%u: can't mod, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	if ((*stack)->n == 0)
	{
		fprintf(stderr, "L%u: division by zero", line_number);
		exit(EXIT_FAILURE);
	}

	mod = malloc(sizeof(stack_t));
	if (mod == NULL)
	{
		fprintf(stderr, "Error: malloc failed");
		exit(EXIT_FAILURE);
	}

	mod->n = (*stack)->next->n % (*stack)->n;
	mod->next = (*stack)->next->next;

	free((*stack)->next);
	free(*stack);

	*stack = mod;
	mod = NULL;
}
