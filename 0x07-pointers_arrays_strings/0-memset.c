#include "main.h"
#include <stdio.h>
/**
 * _memset - fills the first n bytes of memory pointed by s with byte b
 * @s: pointer to memory area
 * @b: the constant byte
 * @n: bytes to be filled
 *
 * Return: pointer to memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;
	char *r = s;

	while (i < n)
	{
		*s = b;
		i++;
		s++;
	}
	return r;
}
