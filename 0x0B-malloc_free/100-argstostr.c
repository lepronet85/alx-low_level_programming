#include "main.c"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - Concatenates all the arguments of a program.
 * @ac: Number of arguments
 * @av: Array of argument strings
 * Description: This function concatenates all the arguments
 * Return: A pointer to the concatenated string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	int i;
	int j;
	int k;
	int l;
	int index = 0;
	int total_length = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			total_length++;
			j++;
		}
		total_length++;
	}
	char *concatenated_str = malloc(sizeof(char) * (total_length + 1));

	if (concatenated_str == NULL)
		return (NULL);

	for (k = 0; k < ac; k++)
	{
		l = 0;

		while (av[k][l] != '\0')
			concatenated_str[index++] = av[i][j++];
		concatenated_str[index++] = '\n';
	}

	concatenated_str[total_length] = '\0';

	return (concatenated_str);
}
