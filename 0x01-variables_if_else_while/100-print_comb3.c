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

	for (n = '0'; n < '9'; n++)
	{
		putchar(n);
		for (n = n + 1; n + 1 <= '9'; n++)
		{
			putchar(n);
			if (n == 9)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
