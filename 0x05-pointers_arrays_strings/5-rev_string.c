#include "main.h"
#include <stdio.h>

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 *
 * Return: no return value
 */

void rev_string(char *s)
{
	int i = 0;
	int j = 0;
	char str[500];

	while (s[i] != '\0')
	{
		str[i] = s[i];
		i++;
	}
	i--;
	while (s[i] != '\0')
	{
		s[i] = str[j];
		j++;
		i--;
	}
	str[j++] = '\0';
}
