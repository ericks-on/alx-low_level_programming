#include "3-calc.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * get_op_func - returns pointer to function to the operator
 * @s: the operator
 * @a: first number 
 * @b: second number
 *
 * Return: pointer to function corresponding with the operator
 */
int (*get_op_func(char *s))(int a, int b)
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
	while (ops[i].op != NULL)
	{
		if (s == ops[i].op)
			return (ops[i].f);
		i++;
	}
	printf("Error\n");
	exit(99);
}
