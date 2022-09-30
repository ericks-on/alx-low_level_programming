#include "main.h"
/**
 * _sqrt_recursion - returns natural square root of a number
 * @n: the number
 *
 * Return:the square root
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - checks squareroot
 * @n: number to check
 * @i: iterable
 *
 * Return: sq
 */

int _sqrt(int n, int i)
{
	int sq = i * i;

	if (sq > n)
		return (-1);
	else if (sq == n)
		return (i);
	return (_sqrt(n, i + 1));
}
