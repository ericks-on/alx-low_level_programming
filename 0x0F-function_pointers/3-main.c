#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - execution
 * @argv: array
 * @argc: count
 *
 * Return:final ans
 */
int main(int argc, char **argv)
{
	char *s;
	int a, b;
	int (*fxn)(int, int);

	if (argc == 4)
	{
		s = argv[2];
		a = atoi(argv[1]);
		b = atoi(argv[3]);
		if (get_op_func(s))
		{
			fxn = get_op_func(s);
			fxn(a, b);
		}

	}
	printf("Error\n");
	exit (98);
}
