#include <stdio.h>
#include "main.h"
/**
 * print_last_digit -prints the last digit of a number
 * @x: number to obtain the last digit
 *
 * Return: returns value of the last digit
 */
int print_last_digit(int x)
{
	int x_positive = x * (-1);

	if (x > 0)
	{
		_putchar((x % 10) + '0');
		return (x % 10);
	}
	else
	{
		_putchar((x_positive % 10) + '0');
		return (x_positive % 10);
	}
}
