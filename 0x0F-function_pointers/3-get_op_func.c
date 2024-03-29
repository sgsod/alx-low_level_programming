#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * get_op_func - choose function to operate
  * @s: operator from input
  *
  * Return: pointer to needed op (success)
  *         NULL: no matching operators
  */
int (*get_op_func(char *s))(int, int)
{
	int i;
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	while (i < 5)
	{
		if (*s == ops[i].op[0])
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
