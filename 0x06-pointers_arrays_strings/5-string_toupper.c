#include "main.h"

/**
 * string_toupper - Function that changes all lowercase letters
 * of a string to uppercase
 * @str: The strin
 * Description This function changes all lowercase letters of a
 * string to uppercase
 * Return: String in uppercase
 */

char *string_toupper(char *str)
{
	char *ptr = str;

	while (*ptr != '\0')
	{
		if (*ptr >= 'a' && *ptr <= 'z')
		{
			*ptr = *ptr - ('a' - 'A');
		}
		ptr++;
	}

	return (str);
}
