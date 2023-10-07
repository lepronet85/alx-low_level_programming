#include <stdio.h>

/**
 * main - Program main entry point
 * @argc: length of program arguments
 * @argv: Array that contains program arguments and it name
 * Return: None (void)
 */

int main(int argc, char __attribute__((unused)) *argv[])
{
	int i = -1;

	while (argc--)
		i++;
	printf("%d\n", i);
	return (0);
}
