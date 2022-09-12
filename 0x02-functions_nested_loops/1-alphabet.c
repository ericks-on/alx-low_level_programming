#include <stdio.h>
#include <main.h>
/**
 * main - printing alphabets
 *
 * Description: printing alphabets in lowercase using _putchar
 * Return: always 0
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
	return (0);
}
