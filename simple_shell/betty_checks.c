#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * main - passes the betty checks
 * argv: argument vector
 * argc:argument count
 *
 * Return: 0 on success
 */
int main(int argc, char **argv)
{
	char **av;
	if (argc < 2)
	{
		printf("usage: %s filename ...\n", argv[0]);
		return (1);
	}
	if (execve("./betty-style.pl", argv, NULL) == -1)
	{
		printf("error\n");
		free(av);
		return (1);
	}
	free(av);
	return (0);
}
