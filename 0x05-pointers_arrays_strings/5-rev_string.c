#include "main.h"

/**
 * rev_string - Function that reverses a string
 * @s: The string
 * Description: This function reverses a string
 * Return: None (void)
 */

void rev_string(char *s)
{

	int length;
	int left;
	int right;

	if (s == NULL)
	{
		return;
	}

	length = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	left = 0;
	right = length - 1;

	while (left < right)
	{
		char temp = s[left];

		s[left] = s[right];
		s[right] = temp;

		left++;
		right--;
	}

}
