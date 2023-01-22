#include "monty.h"

/**
 * pall - Prints all elements of the stack
 *  @stack: pointer to the top node of the stack
 * @line_number: current line number
 *
 * Return: void
 */

void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = *stack;

	UNUSED(line_number);
	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}
}
