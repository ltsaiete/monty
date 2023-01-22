#include "monty.h"

/**
 * freeStack - Frees all the nodes the stack
 * @stack: Top node of the stack
 *
 * Return: void
 */

void freeStack(stack_t **stack)
{
	stack_t *temp = *stack;

	while (temp != NULL)
	{
		temp = temp->next;
		free(*stack);
		*stack = temp;
	}
}
