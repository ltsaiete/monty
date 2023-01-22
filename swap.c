#include "monty.h"

/**
 * swap -  swaps the top two elements of the stack.
 * @stack: pointer to the top node of the stack
 * @line_number: current line number
 *
 * Return: void
 */

void swap(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;

	if (*stack == NULL)
	{
		printf("L%u: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	else if ((*stack)->next == NULL)
	{
		printf("L%u: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	temp = *stack;
	*stack = (*stack)->next;
	temp->next = (*stack)->next;
	(*stack)->next = temp;

	temp = NULL;
}
