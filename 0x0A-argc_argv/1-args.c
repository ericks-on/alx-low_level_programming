#include "main.h"
#include <stdio.h>
/**
 * main - prints number of arguments passed to the program
 * @argc: arguments count
 * @argv: vector containing the arguments
 *
 * Return: returns 0
 */
int main(int argc, char **argv)
{
	(void)argc;

	printf("%d\n", argc - 1);
	return (0);
}
