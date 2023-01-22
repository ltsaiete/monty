#include "monty.h"

/**
 * pstr - prints the string starting at the top of the stack.
 *  @stack: pointer to the top node of the stack
 * @line_number: current line number
 *
 * Return: void
 */

void pstr(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = *stack;

	UNUSED(line_number);

	while (temp != NULL)
	{
		if (temp->n <= 0 || temp->n > 127)
			break;
		putchar(temp->n);
		temp = temp->next;
	}
	putchar('\n');
}
