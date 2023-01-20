#include "main.h"

/**
 * main.c - Entry point
 * @argc: count of arguments
 * @argv: Array of arguments
 *
 * Return: success or failure
 */

int main(int argc, char *argv[])
{
	FILE *textfile;
	char *filename;
	stack_t *top = NULL;
	unsigned int lineNumber = 1;

	if (argc < 2)
	{
		printf("USAGE: monty file\n");
		return (EXIT_FAILURE);
	}

	filename = argv[1];

	textfile = fopen(filename, "r");

	if (textfile == NULL)
	{
		printf("Error: Can't open file %s\n", filename);
		return (EXIT_FAILURE);
	}

	while (fgets(line, MAX_LINE_LENGTH, textfile))
	{
		trimSpaces(line);
		if (strlen(line) > 1)
		{
			handleOpcode(&top, lineNumber);
		}
		lineNumber++;
	}

	fclose(textfile);

	return (EXIT_SUCCESS);
}
