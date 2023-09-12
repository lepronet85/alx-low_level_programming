#include "main.h";

/**
 * _islower - Function to check lowecase
 * Description: This function check if letter passed is lower
 * Return: return 0 or 1
 */

int _islower(int c)
{
	if (c >= 'a && c <= 'z')
	{
		return 1;
	} else
	{
		return 0;
	}
}
