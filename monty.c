#include "monty.h"
bus = {NULL};

/**
 * main - monty code interpreter
 * @argc: number of arguments
 * @argv: argument vector
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	FILE *file;
	unsigned int counter = 0;
	char *content;
	ssize_t *stack = NULL;
	ssize_t *read_line = 1;
	ssize_t size = 0;

	if (argc != 2)
	{
		fprintf(stderr, "USUAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	file = fopen(argv[1], "r");
	bus.file = file;
	if (!file)
	{
		fprintf(stderr, "Error: can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	while (read_line > 0)
	{
		content = NULL;
		read_line = getline(&content, &size, file);
		bus.content = content;
		counter++;
		if (read_line > 0)
		{
			execute(content, &stack, counter, file);
		}
		free(content);
	}
	free_stack(stack);
	fclose(file);

	return (0);
}
