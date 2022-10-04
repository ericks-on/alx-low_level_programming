#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer do newly allocated string
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0;
	int j = 0;
	int n, m;
	char *p;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	p = malloc(sizeof(char) * (i + j + 1));
	if (p == NULL)
		return (NULL);
	for (n = 0; n < i; n++)
	{
		p[n] = s1[n];
	}
	for (m = 0; m < j; m++)
	{
		p[i + m] = s2[m];
	}
	p[i + m] = '\0';
	return (p);
}
