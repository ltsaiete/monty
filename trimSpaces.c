#include "monty.h"
/**
 * trimSpaces - Trim all unnecessary spaces in a line
 * @line: The line
 *
 * Return: void
 */
void trimSpaces(char *line)
{
	unsigned int count = 0, i;

	for (i = 0; i < strlen(line); i++)
	{
		if (line[i] != ' ')
		{
			line[count] = line[i];
			count++;
		}
		else if (count != 0)
		{
			if (line[count - 1] != ' ')
			{
				line[count] = ' ';
				count++;
			}
		}
	}
	line[count] = '\0';
}
