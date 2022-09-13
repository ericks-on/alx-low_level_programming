#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - printing alphabets
 *
 * Description: printing alphabets in lowercase using _putchar
 * Return: always 0
 */
void print_alphabet(void)
{
	int c;

	for (c = 'a'; c <= 'z'; c++)
		_putchar(c);
	_putchar('\n');
	return;
}
