#include "main.h"
/**
 * print_most_numbers - prints numbers from 0 to 9 and skips 2 and 4
 *
 * Return: no return value
 */
void print_most_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		if (c == '2' || c == '4')
			continue;
		_putchar(c);
	}
	_putchar('\n');
}
