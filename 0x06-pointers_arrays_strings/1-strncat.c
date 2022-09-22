#include "main.h"
#include <stdio.h>
/**
 * _strncat - concatenates two strings 
 * @dest: first string
 * @src: second string
 *
 * Return: pointer to the final string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int l = 0;

	while (*dest != '\0')
	{
		l++;
		dest++;
	}
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[l + i] = src[i];
	dest[l + i] = '\0';
	return (dest);
}
