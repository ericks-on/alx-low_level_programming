#include "main.h"
#include <stddef.h>
#include <stdlib.h>
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

	a = malloc(sizeof(char) * 98);
	if (size == 0)
		return (NULL);
	a[0] = c;
	if (a[0] == c)
	{
		free(a);
		return (a);
	}
	else
	{
		free(a);
		return (NULL);
	}
}
