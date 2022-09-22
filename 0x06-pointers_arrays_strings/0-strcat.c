#include "main.h"
#include <stdio.h>
/**
 * _strcat - concatnates two strings
 * @dest: first string
 * @src: second string
 *
 * Return: pointer to resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j;
	int n = 0;

	while (dest[i] != '\0')
		i++;
	j = i + 1;
	while (src[n] != '\0')
	{
		dest[j] = src[n];
		j++;
		n++;
	}
	dest[j] = '\0';
	return (dest);
}
