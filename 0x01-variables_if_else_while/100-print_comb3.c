#include <stdio.h>
/**
 * main - prints all possible combos of two digits
 *
 * Description: uses putchar and for loop
 * Return: returns 0
 */
int main(void)
{
	int n;
	int next;

	for (n = 0; n < 9; n++)
	{
		for (next = n + 1; next <= 9; next++)
		{
			putchar((n % 10) + '0');
			putchar((next % 10) + '0');
			if (n == 8 && next == 9)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
