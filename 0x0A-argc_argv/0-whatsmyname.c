#include "main.h"
#include <stdio.h>
/**
 * main - prints the programs name
 *@argc: count of command line arguments to main
 *@argv:vector of all the strings of the arguments
 *
 * Return: returns 0
 */
int main(int argc, char **argv)
{
	(void)argc;

	printf("%s\n", argv[0]);
	return (0);
}
