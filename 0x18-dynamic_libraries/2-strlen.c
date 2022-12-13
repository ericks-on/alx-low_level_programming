#include "main.h"
#include <stdio.h>
/**
 * _strlen - returns length of a string
 * @s: string to get its length
 *
 * Return: length of string
 */
int _strlen(char *s)
{
	int n;

	n = 0;
	while (*s != '\0')
	{
		n++;
		s++;
	}
	return (n);
}
