#include "main.h"

/**
 * _isdigit - Function that check if digit
 * @c: The value to check
 * Description: This function that checks for a digit (0 through 9)
 * Return: return 0 or 1
 */

int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
		return (1);

	return (0);
}
