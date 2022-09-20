#include "main.h"
#include <stdio.h>
/**
 * _atoi - turning string to int
 * s: the string to be converted
 *
 * Return: the converted int
 */
int _atoi(char *s)
{
	while (s != '\0')
	{
		
		if (s == '-')
			_putchar(s);
		else
			_putchar(s - '0');
		s++;
	}
	_putchar('\n');
}
