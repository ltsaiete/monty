#include "main.h"
/**
 * getFirstWord - Get the first word of a line
 * @line: The line
 *
 * Return: The first word
 */
char *getFirstWord(char *line)
{
	unsigned int i;
	char *word = malloc(sizeof(line));

	for (i = 0; i < strlen(line); i++)
	{
		word[i] = line[i];
		if (line[i] == ' ' || line[i] == '\0' || line[i] == '\n')
		{
			break;
		}
	}
	word[i] = '\0';
	return (word);
}
