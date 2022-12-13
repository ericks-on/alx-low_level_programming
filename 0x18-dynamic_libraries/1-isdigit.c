#include "main.h"
/**
 * _isdigit - Checks for digits
 * @c: requires an int value to be checked
 *
 * Return: Returns 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
