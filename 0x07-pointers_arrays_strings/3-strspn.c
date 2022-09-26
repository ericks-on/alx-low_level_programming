#include "main.h"
#include <stdio.h>
/**
 * _strspn - gets string of a prefix substring
 * @s: the string to search
 * @accept: the reference
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int j;
	int c = 0;
	int r;

	while (s[i] != '\0')
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				c++;
			else
				continue;
		}
		if (c == 0)
		{
			break;
		}
		r = i;
	}
	return (r);
}
