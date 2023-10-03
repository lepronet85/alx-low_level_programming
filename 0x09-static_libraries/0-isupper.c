#include "main.h"

/**
 * _isupper - Function that check if upper
 * @c: The letter to check
 * Description: This function checks if letter passed is
 * uppercase character
 * Return: Reurn 1 or 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);

	return (0);
}
