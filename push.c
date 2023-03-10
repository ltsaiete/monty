#include "monty.h"

/**
 * push - push a number onto the stack
 * @stack: pointer to the top node of the stack
 * @line_number: current line number
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
		fprintf(stderr, "L%u: usage: push integer", line_number);
		exit(EXIT_FAILURE);
	}

	if (*stack == NULL)
	{
		*stack = malloc(sizeof(stack_t));
		(*stack)->n = atoi(arg);
	}
	else
	{

		new = malloc(sizeof(stack_t));
		if (new == NULL)
		{
			fprintf(stderr, "Error: malloc failed");
			exit(EXIT_FAILURE);
		}

		new->n = atoi(arg);
		new->next = *stack;

		*stack = new;
	}
	free(arg);
}

/**
 * isNumber - Verifies if string is a number
 * @n: the string
 *
 * Return: 1 if true, 0 otherwise
 */

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
