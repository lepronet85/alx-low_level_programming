#include "main.h"

/**
 * puts_half - Function that prints half of a string
 * @str: The string
 * Description: This function prints half of a string,
 * followed by a new line
 * Return: None (void)
 */

void puts_half(char *str)
{
	int length = 0;
	int start_index = 0;
	int i = 0;

	while (str[length] != '\0')
	{
		length++;
	}

	if (length % 2 == 0)
	{
		start_index = length / 2;
	}
	else
	{
		start_index = (length + 1) / 2;
	}

	for (i = start_index; str[i] != '\0'; i++)
		_putchar(str[i]);

	_putchar('\n');
}
