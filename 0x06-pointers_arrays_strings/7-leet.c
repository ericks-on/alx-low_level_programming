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
	int l = 0;
	int i;

	while (s[l] != '\0')
		l++;
	for (i = 0; i < l; i++)
	{
		if (s[i] == 'a' || s[i] == 'A')
			s[i] = '4';
		else if (s[i] == 'e' || s[i] == 'E')
			s[i] = '3';
		else if (s[i] == 'o' || s[i] == 'O')
			s[i] = '0';
		else if (s[i] == 't' || s[i] == 'T')
			s[i] = '7';
		else if (s[i] == 'l' || s[i] == 'L')
			s[i] = '1';
	}
	return (s);
}
