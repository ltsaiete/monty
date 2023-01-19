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
	char line[MAX_LINE_LENGTH], *filename;

	if (argc < 2)
	{
		printf("USAGE: monty file\n");
		return (EXIT_FAILURE);
	}

	filename = argv[1];
	initStack();

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
			handleOpcode(line);
		}
	}

	fclose(textfile);

	return (EXIT_SUCCESS);
}
