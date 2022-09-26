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
	while (*s != '\0')
	{
		while (*accept != '\0')
		{
			if (*s == *accept)
				return (s);
			else
				accept++;
		}
		s++;
	}
	return (NULL);
}
