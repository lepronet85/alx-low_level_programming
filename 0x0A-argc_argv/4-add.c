#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Program main entry point
 * @argc: length of program arguments
 * @argv: Array that contains program arguments and it name
 * Return: None (void)
 */

int main(int argc, char *argv[])
{
	int sum = 0;
	int i, j;

	if (argc == 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);

	return (0);
}
