#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <limits.h>
/**
 * create_array - creates an array of chars
 * @size: size of array
 * @c: the character to initialize in array
 *
 * Return: NULL if size is 0 or if it fails.otherwise pointer to array
 */
char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i;

	if (size == 0)
		return (NULL);
	a = malloc(sizeof(char) * size);
	if (a == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		a[i] = c;
	return (a);
}
