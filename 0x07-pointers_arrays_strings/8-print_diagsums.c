#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints sum of diagonals of a matrix
 * @a: the matrix
 * @size: size of the matrix
 *
 * Return: no return value
 */
void print_diagsums(int *a, int size)
{
	int i, j;
	int n = size;
	int sum_1 = 0;
	int sum_2 = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
				sum_1 += *(a + ((i * size) + j));
		}
		n--;
		sum_2 += *(a + ((i * size) + n));
	}
	printf("%d, %d\n", sum_1, sum_2);
}
