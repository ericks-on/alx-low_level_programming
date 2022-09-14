#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - prints from n to 98
 * @n: starting point
 *
 * Return: no return value
 */
void print_to_98(int n)
{
	for (n = n; n <= 98; n++)
	{
		if (n < 98)
			printf("%d, ", n);
		else
			printf("%d", n);
	}
	printf("\n");
}
