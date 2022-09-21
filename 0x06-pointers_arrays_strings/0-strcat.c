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

	while (*dest != '\0')
		i++;
	while (*src != '\0')
	{
		*dest[i] = *src;
		i++;
	}
	*dest[i + 1] = '\0';
}
