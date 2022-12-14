#include "main.h"
#include <stdio.h>
/**
 * _strncat - concatenates two strings 
 * @dest: first string
 * @src: second string
 * @n: no of bytes
 *
 * Return: pointer to the final string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int l = 0;

	while (dest[l] != '\0')
	{
		l++;
	}
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[l + i] = src[i];
	dest[l + i] = '\0';
	return (dest);
}
