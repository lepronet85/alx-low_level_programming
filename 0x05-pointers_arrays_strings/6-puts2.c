#include "main.h"

/**
 * puts2 - Function that prints every other character
 * of a string
 * @str: The string
 * Description: This function prints every other character of
 * a string, starting with the first character, followed by a
 * new line
 * Return: None (void)
 */

void puts2(char *str)
{
	int i;

	if (str == NULL)
		return;

	for (i = 0; str[i] != '\0'; i += 2)
	{
		putchar(str[i]);
	}

	putchar('\n');
}
