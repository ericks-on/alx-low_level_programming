#include <stdio.h>
#include "main.h"
/**
 * jack_bauer - prints minutes
 *
 * Return: no return value
 */
void jack_bauer(void)
{
	int f;
	int s;
	int t;
	int fr;

	for (f = 0; f <= 2; f++)
	{
		for (s = 0; s <= 9; s++)
		{
			for (t = 0; t <= 5; t++)
			{
				for (fr = 0; fr <= 9; fr++)
				{
					_putchar((f % 10) + '0');
					_putchar((s % 10) + '0');
					_putchar(':');
					_putchar((t % 10) + '0');
					_putchar((fr % 10) + '0');
					_putchar('\n');
				}
			}
		}
	}
}
