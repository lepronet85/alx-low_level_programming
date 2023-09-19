#include "main.h"

/**
 * rev_string - Function that reverses a string
 * @s: The string
 * Description: This function reverses a string
 * Return: None (void)
 */

void rev_string(char *s)
{
	if (s == NULL)
	{
		return;
	}

	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	int left = 0;
	int right = length - 1;

	while (left < right)
	{
		char temp = s[left];

		s[left] = s[right];
		s[right] = temp;

		left++;
		right--;
	}

}
