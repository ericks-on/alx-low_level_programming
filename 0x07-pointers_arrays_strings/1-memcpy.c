#include "main.h"
#include <stdio.h>
/**
 * _memcpy - copies n bytes from src to memory area dest
 * @dest: where to copy to
 * @src: where to copy from
 * @n: number of bytes to copy
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}
	return (dest - i);
}
