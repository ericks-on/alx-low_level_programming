#include <stdio.h>
#include "main.h"
/**
 * _abs - finds the absolute value
 * @x: number whose absolute value is to be calculated
 *
 * Return: returns the absolute value
 */
int _abs(int x)
{
	if (x > 0)
		return (x);
	else
		return (x * (-1));
}
