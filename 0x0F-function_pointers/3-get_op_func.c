#include <stdlib.h>
#include "3-calc.h"
#include <stdio.h>

/**
 * get_op_func - calls function on two integral arguments
 * based on operation given
 * @s: operator
 *
 * Return: value from callback
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
	int i;

	i = 0;
	while (i < 5)
	{
		if (*s == ops[i].op[0])
		{
			break;
		}
		i++;
	}
	return (ops[i].f);
}
