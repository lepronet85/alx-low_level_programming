#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * get_op_func - Returns a pointer to the function that corresponds
 * to the operator.
 * @s: Operator passed as argument
 * Return: Pointer to the function that corresponds to the operator,
 * or NULL if not found.
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	int i = 0;

	while (ops[i].op)
	{
		if (*(ops[i].op) == *s && s[1] == '\0')
			return (ops[i].f);
		i++;
	}

	printf("Error\n");
	exit(99);
}
