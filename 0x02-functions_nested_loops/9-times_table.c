#include <stdio.h>
#include "main.h"
/**
 * times_table - prints the 9 times table
 *
 * Return: no return value
 */
void times_table(void)
{
	int n;
	int m;

	for (n = 0; n <= 9; n++)
	{
		for (m = 0; m <= 9; m++)
		{
			int ans = m * n;
			int ans_next = (m + 1) * n;

			if (ans < 10)
			{
				_putchar((ans % 10) + '0');
				if (m == 9)
					continue;
				_putchar(',');
				_putchar(' ');
				if (ans_next >= 10)
					continue;
				_putchar(' ');
			}
			else
			{
				int first = ans / 10;

				_putchar((first % 10) + '0');
				_putchar((ans % 10) + '0');
				if (m == 9)
					continue;
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
