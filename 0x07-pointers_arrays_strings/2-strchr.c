#include "main.h"
#include <stdio.h>
/**
 * _strchr - locates acharacter in a string
 * @s: the string to search through
 * @c: the character to search
 *
 * Return: pointer to first occurence of the string , NULL if not found
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			{
				break;
				return (s + i);
			}
		else
			return (NULL);
	}
}
