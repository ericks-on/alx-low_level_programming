#include <stdio.h>
/**
 * main - prints all possible combos of three digits
 *
 * Description:
 * Return
 */
int main(void)
{
	int first;
	int second;
	int third;

	for (first = 0; first <= 7; first++)
	{
		for (second = first + 1; second <= 8; second++)
		{
			for (third = second + 1; third <= 9; third++)
			{
				putchar((first % 10) + '0');
				putchar((second % 10) + '0');
				putchar((third % 10) + '0');
				if (first == 7 && second == 8 && third == 9)
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
