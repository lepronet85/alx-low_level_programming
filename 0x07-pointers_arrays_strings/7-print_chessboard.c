#include "main.h"

/**
 * print_chessboard - Function that prints the chessboard.
 * @a: 2d array
 * Description: This function prints the chessboard
 * Return: None (void)
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; a[i][7]; i++)
	{
		for (j = 0; j < 8; j++)
			_putchar(a[i][j]);
		_putchar('\n');
	}
}
