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
	if (str == NULL)
		return;

	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i += 2;
	}

	_putchar('\n');
}
