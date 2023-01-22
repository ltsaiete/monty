#include "main.h"
/**
 * getFirstWord - Get the first word of a line
 * @currentLine: The line
 *
 * Return: The first word
 */
char *getFirstWord(char *currentLine)
{
	unsigned int i;
	char *word = malloc(sizeof(currentLine));

	for (i = 0; i < strlen(currentLine); i++)
	{
		word[i] = currentLine[i];
		if (currentLine[i] == ' ' || currentLine[i] == '\n')
		{
			break;
		}
	}
	word[i] = '\0';
	return (word);
}

/**
 * getArgument - Get the first word of a line
 * @currentLine: The line
 *
 * Return: The first word
 */
char *getArgument(char *currentLine)
{
	unsigned int i, count = 0;
	char *word = malloc(sizeof(currentLine));

	for (i = 0; i < strlen(currentLine) && currentLine[i] != ' '; i++)
	{
	}

	if (currentLine[i] != '\0')
	{
		for (++i; i < strlen(currentLine) && currentLine[i] != ' '; i++)
		{
			if (currentLine[i] == '\n')
				break;
			word[count] = currentLine[i];
			count++;
		}
	}

	word[count] = '\0';
	return (word);
}
