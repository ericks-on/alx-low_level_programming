#include "main.h"
#include <stdio.h>
/**
 * cap_string - capitalized all words of a string
 * @s: string to be capitalized
 *
 * Return: the converted string
 */
char *cap_string(char *s)
{
	int l = 0;
	int i;

	while (s[l] != 0)
		l++;
	if (s[0] >= 'a' && s[0] <= 'z')
		s[0] = 'A' + (s[0] - 'a');
	for (i = 0; i < l; i++)
	{
		if ((s[i] = ' ') || (s[i] = '\n') || (s[i] = '\t'))
		{
			if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
			{
				s[i + 1] = 'A' + (s[i + 1] - 'a');
			}
		}
	}
	return (s);
}
