#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns pointer to newly allocated space
 * @str: the string
 *
 * Return: pointer to newly allocated space or null
 */
char *_strdup(char *str)
{
	int i = 0;
	int j = 0;
	char *cstr;

	if (str == NULL)
		return (NULL);
	while (str[i] != '\0')
		i++;
	cstr = malloc(sizeof(char) * (i - 1));
	if (cstr == NULL)
		return (NULL);
	while (j < i)
	{
		cstr[j] = str[j];
		j++;
	}
	return (cstr);
}
