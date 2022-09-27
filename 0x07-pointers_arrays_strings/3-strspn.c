#include "main.h"
#include <stdio.h>
/**
 * _strspn - gets string of a prefix substring
 * @s: the string to search
 * @accept: the reference
 *
 * Return: number of bytes in initial segment
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				break;
		}
		if (!accept[j])
			break;
	}
	return (i);
}
