#include"main.h"
#include <stdio.h>
/**
 * _isupper - checks if a character is an uppercase character
 * @c: the character to check
 *
 * Return: return (0)
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
