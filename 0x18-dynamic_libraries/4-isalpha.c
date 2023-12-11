#include "main.h"

/**
 * _isalpha - Function to check alpha
 * @c: The letter
 * Description: This function check if letter passed is alpha
 * Return: return 0 or 1
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= 0 && c <= 9))
	{
		return (1);
	}

	return (0);
}
