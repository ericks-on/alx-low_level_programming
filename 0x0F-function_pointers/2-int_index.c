#include "function_pointers.h"
#include <stdlib.h>
/**
 * int_index - searches for an integer
 * @size: number of elements in the array
 * @cmp: pointer to a compare function
 * @array: an array
 *
 * Return: index of first element that cmp does not return 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size > 0 && array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}
