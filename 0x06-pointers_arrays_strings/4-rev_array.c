#include "main.h"
#include <stdio.h>
/**
 * reverse_array - reverses the content of an array
 * @a: the array
 * @n: number of elements in the array
 *
 * Return: no return value
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int f;
	int l;

	while (i < n - 1)
	{
		f = a[i];
		l = a[n - 1];
		a[i] = l;
		a[n - 1] = f;
		i++;
		n--;

	}
}
