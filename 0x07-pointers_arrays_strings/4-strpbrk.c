#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - locates first occurence in the string s of any of the bytes in s
 * @s: the string to search
 * @accept: the characters to search
 *
 * Return: pointer to the byte in s that matches a byte in accept , NULL if no
 * match
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s != '\0')
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return (NULL);
}
