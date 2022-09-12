#include <stdio.h>
/**
 *main - prints all possible diff combos of two two-digit numbers
 *
 *Description: using for loop and putchar only
 *Return: returns 0
 *
 */
int main(void)
{
	int first;
	int second;
	int third;
	int forth;

	for (first = 0; first <= 9; first++)
	{
		for (second = 0; second <= 9; second++)
		{
			for (third = 0; third <= 9; third++)
			{
				for (forth = third + 1; forth <= 9;
						forth++)
				{
					putchar((first % 10) + '0');
					putchar((second % 10) + '0');
					putchar(' ');
					putchar((third % 10) + '0');
					putchar((forth % 10) + '0');
					if (first == 9 && second == 9 &&
							third == 9 &&
							forth == 9)
						continue;
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
