#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - Concatenates all the arguments of a program.
 * @ac: Number of arguments
 * @av: Array of argument strings
 * Description: This function concatenates all the arguments
 * Return: A pointer to the concatenated string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	char *new_string = NULL;
	int k = 0, i = ac, j, sum = 0, temp = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	while (ac--)
		sum += (strlen(av[ac]) + 1);
	new_string = (char *) malloc(sum + 1);

	if (new_string != NULL)
	{
		while (k < i)
		{
			for (j = 0; av[k][j] != '\0'; j++)
				new_string[j + temp] = av[k][j];
			new_string[temp + j] = '\n';
			temp += (j + 1);
			k++;
		}
		new_string[temp] = '\0';
	}
	else
	{
		return (NULL);
	}
	return (new_string);
}
