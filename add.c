#include "monty.h"

/**
 * add -  adds the top two elements of the stack.
 * @stack: pointer to the top node of the stack
 * @line_number: current line number
 *
 * Return: void
 */

void add(stack_t **stack, unsigned int line_number)
{
	stack_t *sum;

	if (*stack == NULL)
	{
		fprintf(stderr, "L%u: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	else if ((*stack)->next == NULL)
	{
		fprintf(stderr, "L%u: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	sum = malloc(sizeof(stack_t));
	if (sum == NULL)
	{
		fprintf(stderr, "Error: malloc failed");
		exit(EXIT_FAILURE);
	}

	sum->n = (*stack)->n + (*stack)->next->n;
	sum->next = (*stack)->next->next;

	free((*stack)->next);
	free(*stack);

	*stack = sum;
	sum = NULL;
}
