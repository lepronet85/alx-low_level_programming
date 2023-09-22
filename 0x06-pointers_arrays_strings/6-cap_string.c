#include "main.h"
#include <stdbool.h>
#include <ctype.h>

/**
 * is_separator - Function that checks separator
 * @c: The charcater
 * Description: This function checks separator
 * Return: true or false
 */

bool is_separator(char c)
{
	char separators[] = " \t\n,;.!?\"(){}";
	int i;

	for (i = 0; separators[i] != '\0'; i++)
	{
		if (c == separators[i])
			return (true);
	}

	return (false);
}

/**
 * cap_string - Function that capitalizes all words of a string
 * @str: The string
 * Description: This function capitalizes all words of a string
 * Return: Capilazes string
 */

char *cap_string(char *str)
{
	bool new_word = true;

	while (*str != '\0')
	{
		if (is_separator(*str))
		{
			new_word = true;
		}
		else
		{
			if (new_word)
			{
				*str = toupper(*str);
				new_word = false;
			}
			else
			{
				*str = tolower(*str);
			}
		}
		str++;
	}

	return (str);
}
