#include <stdlib.h>

/**
 * _strdup - Creates a new string in memory as a duplicate of the
 * input string.
 * @str: The string to duplicate
 * Description: This function creates a new string in memory as a
 * duplicate of the input string
 * Return: A pointer to the duplicated string, or NULL on failure
 */

char *_strdup(char *str)
{
	char *duplicate_str;
	int i, str_length = 0;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		str_length++;

	duplicate_str = malloc(sizeof(char) * (str_length + 1));

	if (duplicate_str == NULL)
        	return (NULL);

	for (i = 0; str[i]; i++)
 		duplicate_str[i] = str[i];

	duplicate_str[str_length] = '\0';

	return (duplicate_str);
}
