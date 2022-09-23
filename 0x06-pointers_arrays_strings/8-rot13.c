#include "main.h"
#include <stdio.h>
/**
 * rot13 - encodes string using rot13
 * @s: the string to be encoded
 *
 * Return: the encoded string
 */
char *rot13(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' &&
					s[i] <= 'Z'))
				{
					s[i] += 13;
				}
	}
}
