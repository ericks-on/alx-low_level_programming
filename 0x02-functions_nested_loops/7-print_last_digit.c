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
	int y = _abs(x);

	_putchar((y % 10) + '0');
	return (y % 10);
}
