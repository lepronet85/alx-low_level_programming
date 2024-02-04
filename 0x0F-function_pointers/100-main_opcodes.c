#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the opcodes of its own main function.
 * @argc: Number of command-line arguments
 * @argv: Array of command-line arguments
 * Return: 0 on success, 1 for incorrect number of arguments,
 * 2 for negative number of bytes
 */
int main(int argc, char *argv[])
{
	int bytes, i;
	unsigned char *opcodes;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		return (2);
	}

	opcodes = (unsigned char *)main;

	for (i = 0; i < bytes; ++i)
	{
		printf("%02x", opcodes[i]);
		if (i < bytes - 1)
			printf(" ");
	}

	printf("\n");

	return (0);
}
