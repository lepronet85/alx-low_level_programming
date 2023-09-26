#include "main.h"

/**
 * set_string - Function that sets the value of a pointer to a char.
 * @s: Pointed string
 * @to: pointed to value
 * Description: This function sets the value of a pointer to a char
 * Return: None (void)
 */

void set_string(char **s, char *to)
{
	*s = to;
}
