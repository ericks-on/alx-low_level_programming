#include "main.h"
#include <stddef.h>
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

	if (size == 0)
		return (NULL);
	a[0] = c;
	if (a[0] = c)
		return (a);
	else
		return (NULL);
}
