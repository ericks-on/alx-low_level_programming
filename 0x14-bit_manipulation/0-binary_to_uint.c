#include "main.h"
#include <stddef.h>
/**
 * binary_to_uint - changes binary to unsigned int
 * @b: string containing the binary number
 *
 * Return: the converted value
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i, temp, num, sum = 0, pwr, pdt;

	if (b != NULL)
	{
		for (i = 0; b[i] != '\0'; i++)
		{
			if (b[i] < '0' || b[i] > '1')
				return (0);
		}
		temp = i;
		while (i > 0)
		{
			pwr = temp - i;
			pdt = 1;
			while (pwr > 0)
			{
				pdt *= 2;
				pwr--;
			}
			num = b[i - 1] - '0';
			sum += num * pdt;
			i--;
		}
		return (sum);
	}
	return (0);
}
