#include "main.h"
#include <stdio.h>
/**
 * main - prints number of arguments passed to the program
 * @argc: arguments count
 * @argv: vector containing the arguments
 *
 * Return:void
 */
void main(int argc, char **argv)
{
	printf("%d\n", argc - 1);
}