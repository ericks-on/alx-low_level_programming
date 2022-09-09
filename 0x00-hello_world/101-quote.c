#include <stdio.h>
/**
 * main - prints to stderr
 *
 * Description: uses fprintf instead of printf or puts
 * Return: returns 1
 */
int main(void)
{
 	fprintf(stderr, "and that piece of art is useful\""
			" - Dora Korpar, 2015-10-19\n");
	return (1);
}
