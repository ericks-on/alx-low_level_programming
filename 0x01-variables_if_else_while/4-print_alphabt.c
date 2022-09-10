#include <stdio.h>
/**
 * main - k
 *
 * Description: k
 * Return: 0
 */
int main(void)
{
	int c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'q' && c != 'e')
			putchar(c);
	}
	putchar('\n');
	return (0);
}
