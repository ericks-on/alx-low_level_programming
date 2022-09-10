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
		putchar(n);
		for (next = n + 1; next <= '9'; n++)
		{
			putchar(next);
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
