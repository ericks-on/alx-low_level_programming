#include <stdio.h>
#include "main.h"
/**
 * _abs - finds the absolute value
 * @parameter: either -ve or +ve
 *
 * Return: returns the absolute value
 */
int _abs(int)
{
	int x;

	if (x > 0)
		return (x);
	else
		return (x * (-1));
}
