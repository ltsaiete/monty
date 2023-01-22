#include "monty.h"

/**
 * _mul -  multiplies the second top element of the stack
 * with the top element of the stack.
 * @stack: pointer to the top node of the stack
 * @line_number: current line number
 *
 * Return: void
 */

void _mul(stack_t **stack, unsigned int line_number)
{
	stack_t *mul;

	if (*stack == NULL)
	{
		fprintf(stderr, "L%u: can't mul, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	else if ((*stack)->next == NULL)
	{
		fprintf(stderr, "L%u: can't mul, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	mul = malloc(sizeof(stack_t));
	if (mul == NULL)
	{
		fprintf(stderr, "Error: malloc failed");
		exit(EXIT_FAILURE);
	}

	mul->n = (*stack)->n * (*stack)->next->n;
	mul->next = (*stack)->next->next;

	free((*stack)->next);
	free(*stack);

	*stack = mul;
	mul = NULL;
}
