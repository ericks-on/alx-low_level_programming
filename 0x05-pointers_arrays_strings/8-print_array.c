#include "main.h"
#include <stdio.h>

/**
 * print_array - prints elements of an array
 * @a: pointer of the array
 * @n: number of elements
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%d", a[i]);
		if (i != (n - 1))
		{
			printf(",");
			printf(" ");
		}
		i++;
	}
	printf("\n");
}
