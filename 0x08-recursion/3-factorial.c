#include "main.h"
/**
 * factorial - returns factorial of anumber
 * @n: the number to get its factorial
 *
 * Return: the factorial
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
