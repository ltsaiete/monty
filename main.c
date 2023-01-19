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
	char line[MAX_LINE_LENGTH], *filename, *op;

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
		op = getFirstWord(line);
		/**
		 * Build switch-case
		 * build functions to handle the instructions
		 * handle the intructions inside switch case using the functions and
		 * struct instruction_t
		 */
	}

	fclose(textfile);

	return (EXIT_SUCCESS);
}
