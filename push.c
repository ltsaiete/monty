#include "main.h"

/**
 * push.c - push a number onto the stack
 * @n: the number to be pushed
 *
 * Return: void
 */

void push(stack_t **stack, unsigned int line_number)
{
	char *arg;

	stack_t *new;
	arg = getArgument(line);

	if (strlen(arg) == 0 || isNumber(arg) == 0)
	{
		printf("L%u: usage: push integer", line_number);
	}

	if (*stack == NULL)
	{
		*stack = malloc(sizeof(stack_t));
		(*stack)->n = atoi(arg);
	}

	new = malloc(sizeof(stack_t));

	new->n = atoi(arg);
	new->next = *stack;

	*stack = new;
}

int isNumber(char *n)
{
	unsigned int i;

	for (i = 0; i < strlen(n); i++)
	{
		if (isdigit(n[i]) == 0)
			return (0);
	}

	return (1);
}
