#include "monty.h"

/**
 * pop - removes the top element of the stack.
 * @stack: pointer to the top node of the stack
 * @line_number: current line number
 *
 * Return: void
 */

void pop(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;

	if (*stack == NULL)
	{
		printf("L%u: can't pop an empty stack\n", line_number);
		exit(EXIT_FAILURE);
	}

	temp = *stack;
	*stack = temp->next;
	free(temp);
}
