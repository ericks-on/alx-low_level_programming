#include "main.h"
#include <stdio.h>
/**
 * leet - encodes a string into 1337
 * @s: the string to be converted
 *
 * Return: pointer to the string
 */
char *leet(char *s)
{
	int l;
	int i;
	char options[] = "aAeEoOtTlL";
	char rep[] = "43071";

	for (l = 0; s[l] != '\0'; l++)
	{
		for (i = 0; options[i] != '\0'; i++)
		{
			if (s[l] == options[i])
			{
				s[l] = rep[i / 2];
			}
		}
	}
	return (s);
}
