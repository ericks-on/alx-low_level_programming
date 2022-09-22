#include "main.h"
#include <stdio.h>
/**
 * _strcmp -compares two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: 0 if equal, posituve if s1 is larger, negative if s1 is smaller
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0')
	{
		if (s1[i] == s2[i])
			i++;
		else
			break;
	}
	return (s1[i] - s2[i]);
}
