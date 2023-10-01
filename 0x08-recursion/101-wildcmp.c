#include "main.h"

/**
 * wildcmp - Function to compare two strings considering
 * special char *
 * @s1: The first string
 * @s2: The second string
 * Description: This function  compares two strings and returns 1 if
 * the strings can be considered identical, otherwise return 0
 * Return: 0 or 1
 */

int wildcmp(char *s1, char *s2)
{
	if (*s2 == '\0')
		return (*s1 == '\0');
	if (*s2 == *s1)
		return (*s1 != '\0' && wildcmp(s1 + 1, s2 + 1));
	if (*s2 == '*')
		return (wildcmp(s1, s2 + 1) || (*s1 != '\0' && wildcmp(s1 + 1, s2)));
	return (0);
}
