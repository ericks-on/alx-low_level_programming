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
	_putchar((x % 10) +'0');
	return (x % 10);
}
