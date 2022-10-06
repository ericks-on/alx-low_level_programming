#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * malloc_checked - allocates memory using malloc
 * @b: size of memory to be allocated
 *
 * Return:nothing
 */
void *malloc_checked(unsigned int b)
{
	int *ptr = malloc(sizeof(int) * b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
