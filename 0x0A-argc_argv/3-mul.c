#include <stdio.h>
#include <stdlib.h>

/**
 * main - Program main entry point
 * @argc: length of program arguments
 * @argv: Array that contains program arguments and it name
 * Return: None (void)
 */

int main(int argc, char *argv[])
{
	int result, a, b;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	a = atoi(argv[1]);
	b = atoi(argv[2]);
	result = a * b;
	printf("%d\n", result);
	return (0);
}
