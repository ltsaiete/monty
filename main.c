#include "main.h"
#include <string.h>

opcode_t *getOpcode(char *line)
{
	opcode_t *opcode = NULL;
	unsigned int i, len = strlen(line);

	for (i = 0; i < len; i++)
	{
		if (line[i] != ' ')
		{
			opcode->operation += line[i];
		}
	}

	return opcode;
}

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
	opcode_t *opcode;

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
		opcode = getOpcode(line);
		opcode->operation = "push";
	}

	fclose(textfile);

	return (EXIT_SUCCESS);
}
