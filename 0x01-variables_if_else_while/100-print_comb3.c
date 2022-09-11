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

	for (n = '0'; n < '9'; n++)
	{
		next = n + 1;
		while (next <= '9')
		{
			putchar((n % 10) + '0');
			putchar((next % 10) + '0');
			putchar(',');
			putchar(' ');
			next++;
		}
	}
	putchar('\n');
	return (0);
}
