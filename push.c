#include "main.h"

/**
 * push.c - push a number onto the stack
 * @n: the number to be pushed
 *
 * Return: void
 */

void push(int n)
{
	stack_t *new;

	if (top == NULL)
	{
		top->n = n;
	}

	new = malloc(sizeof(stack_t));

	new->n = n;
	new->next = top;

	top = new;
}
