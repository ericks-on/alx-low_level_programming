#include "main.h"
#include <stdio.h>
/**
 * main - prints all arguments it recieves
 * @argc: arguments count
 * @argv: array of all arguments
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	(void) argv;

	printf("%d\n", argc - 1);
}