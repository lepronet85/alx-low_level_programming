#include "main.h"
#include <string.h>

/**
 * is_palindrome_recursive - Function to check if a string is a palindrome
 * using recursion
 * @s: The string
 * @start: The start
 * @end: The end
 * Description: This function check if a string is a palindrome using
 * recursion
 * Return: 0 or 1
 */

int is_palindrome_recursive(char *s, int start, int end)
{
	if (start >= end)
		return (1);

	if (s[start] != s[end])
		return (0);

	return (is_palindrome_recursive(s, start + 1, end - 1));
}

/**
 * is_palindrome - Function to interface with the required prototype
 * @s: The string
 * Return: 0 or 1
 */

int is_palindrome(char *s)
{
	int len = strlen(s);

	if (len <= 1)
		return (1);

	return (is_palindrome_recursive(s, 0, len - 1));
}
