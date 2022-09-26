#include "main.h"
#include <stdio.h>
/**
 * _strspn - gets string of a prefix substring
 * @s: the string to search
 * @accept: the reference
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	int c = 0;
	int r;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				c++;
		}
		if (c == 0)   /*no matching character*/
		{
			break;
		}
	}
	return (i);
}
