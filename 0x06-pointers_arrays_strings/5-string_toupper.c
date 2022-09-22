#include "main.h"
#include <stdio.h>
/**
 * string_toupper - changes all lowercase letters to uppercase
 * @s: expects a string
 *
 * Return: the converted string
 */
char *string_toupper(char *s)
{
	int l = 0;
	int i;

	while (s[l] != '\0')
		l++;
	for (i = 0; i < l; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = 'A' + (s[i] - 'a')
		}
	}
	return (s);
}
