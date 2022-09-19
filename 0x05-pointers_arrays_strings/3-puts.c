#include "main.h"
#include <stdio.h>
/**
 * _puts - prints string to stdout followed by anew line
 * @str: the string
 *
 * Return: no returnvalue
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
