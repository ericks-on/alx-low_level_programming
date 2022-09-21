#include "main.h"
#include <stdio.h>
/**
 * _strcat - concatnates two strings
 * @dest:first string
 * @src: second string
 *
 * Return:pointer to resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j;

	while (dest[i] != '\0')
		i++;
	j = i + 1;
	while (*src != '\0')
	{
		dest[j] = *src;
		j++;
		src++;
	}
	dest[j + 1] = '\0';
	return (dest);
}
