#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * op_add - adds two numbers
 * @a: first number
 * @b: second number
 *
 * Return: sum of two numbers
 */
int op_add(int a, int b)
{
	int result;

	if (a && b)
	{
		result = a + b;
		printf("%d\n", result);
		exit(0);
	}
}
/**
 * op_sub - subtracts two numbers
 * @a: first number
 * @b: second number
 *
 * Return: difference of a and b
 */
int op_sub(int a, int b)
{
	int result;

	if (a && b)
	{
		result = a - b;
		printf("%d\n", result);
		exit(0);
	}
}
/**
 * op_mul - multiplies two numbers
 * @a: first number
 * @b: second number
 *
 * Return: product 
 */
int op_mul(int a, int b)
{
	int result;

	if (a && b)
	{
		result = a * b;
		printf("%d\n", result);
		exit(0);
	}
}
/**
 * op_div - divides two numbers
 * @a: first number
 * @b: second numbber
 *
 * Return: result after dividing a and b
 */
int op_div(int a, int b)
{
	int result;

	if (a && b)
	{
		result = a / b;
		printf("%d\n", result);
		exit(0);
	}
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
}
/**
 * op_mod - returns the remainder
 * @a: first number
 * @b second number
 *
 * Return: the remainder
 */
int op_mod(int a, int b)
{
	int result;

	if (a && b)
	{
		result = a % b;
		printf("%d\n", result);
		exit(0);
	}
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
}
