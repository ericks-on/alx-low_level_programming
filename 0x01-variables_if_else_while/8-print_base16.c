#include <stdio.h>
/**
 * main - base 16 numbers
 *
 * Description: printint all base 16 numbers using putchar
 * Return: 0
 */
int main(void)
{
	int n;
	int c;

	for (n = '0'; n <= '9'; n++)
		putchar(n);
	for (c = 'a'; c <= 'f'; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
