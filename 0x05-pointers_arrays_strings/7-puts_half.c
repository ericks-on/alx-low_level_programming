#include "main.h"
#include <stdio.h>
/**
 * puts_half - prints the second half of a string , ending with new line
 * @str: the string
 *
 * Return: no return value
 */

void puts_half(char *str)
{
	int i = 0;
	int j;

	while (str[i] != '\0')
	{
		i++;
	}
	if (i % 2 == 0)
		j = i / 2;
	else
		j = (i + 1) / 2;
	while (j < i)
	{
		_putchar(str[j]);
		j++;
	}
	_putchar('\n');
}
