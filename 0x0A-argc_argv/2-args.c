#include <stdio.h>

/**
 * main - Program main entry point
 * @argc: length of program arguments
 * @argv: Array that contains program arguments and it name
 * Return: None (void)
 */

int main(int argc, char *argv[])
{
	while (argc--)
		printf("%s\n", *argv++);
	return (0);
}
