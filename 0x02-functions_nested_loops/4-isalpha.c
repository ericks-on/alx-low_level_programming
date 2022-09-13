#include <stdio.h>
#include "main.h"
/**
 * _isalpha - checks if an arguement is alphanumerical
 * c: only argument , it is the character to be checked
 *
 * Return: returns 1 if either lower or uppercase and 0 if neither
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
