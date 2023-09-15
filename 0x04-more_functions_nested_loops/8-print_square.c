#nclude "main.h"

/**
 * print_square - Function that prints a square
 * @size: The square size
 * Description: This function prints a square, followed by a
 * new line.
 * Return: None (void)
 */

void print_square(int size)
{
	int row, col;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (row = 0; row < size; row++)
		{
			for (col = 0; col < size; col++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
