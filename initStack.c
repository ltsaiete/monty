#include "main.h"

stack_t *top = NULL;
/**
 * initStack - Initialize our stack
 *
 * Return: void
 */

void initStack()
{
	top = malloc(sizeof(stack_t));
	top = NULL;
}
