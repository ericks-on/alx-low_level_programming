#include "function_pointers.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * array_iterator - executes fxn given as a parameter on each element of array
 * @array: array to be iterated
 * @size: size of array
 * @action: pointer to fxn to be used
 * 
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && size && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
