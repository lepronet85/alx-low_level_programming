#include "main.h"

/**
 * print_chessboard - Function that prints the chessboard.
 * @a: 2d array
 * Description: This function prints the chessboard
 * Return: None (void)
 */

void print_chessboard(char (*a)[8])
{
	int size = sizeof(a) / sizeof(a[0]);
	int i;
	int j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar(a[i][j]);
		}

		_putchar('\n');
	}
}
