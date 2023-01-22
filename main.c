#include "main.h"

/**
 * main - Entry point
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
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	filename = argv[1];

	textfile = fopen(filename, "r");

	if (textfile == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", filename);
		exit(EXIT_FAILURE);
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

	exit(EXIT_SUCCESS);
}
