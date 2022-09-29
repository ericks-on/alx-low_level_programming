#include "main.h"
/**
 * _print_rev_recursion - prints string in reverse
 * @s: the string to be printed
 *
 * Return:void
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;
	_print_rev_recursion(s++);
	_putchar(*s);
}
