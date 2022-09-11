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

	next = n + 1;
	for (n = '0'; n < '9'; n++)
	{
		while (n < '9')
		{
			putchar(n);
			putchar(next);
			putchar(',');
			putchar(' ');
			next++
			if (next == '9')
				break;
		}
	}
	putchar('\n');
	return (0);
}
