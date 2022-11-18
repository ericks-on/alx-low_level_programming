#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/stat.h>
#include <sys/wait.h>
/**
 * main - unix command line interpreter
 *
 */
int main(int argc, char **argv, char **envp)
{
	size_t n = 5;
	char *buf;
	char *av[2];
	int i;
	struct stat stat_buf;
	pid_t child_pid;
	int status;

	buf = malloc(sizeof(char) * n);
	if (buf == NULL)
		return (1);
	printf("$ ");
	getline(&buf, &n, stdin);
	while (buf[i] != '\0')
	{
		if (buf[i] == ' ')
		{
			printf("%s: No such file or directory\n", argv[0]);
			printf("$ ");
			getline(&buf, &n, stdin);
		}
		i++;
	}
	if (stat(buf, &stat_buf) != 0)
	{
		printf("%s: No such file or directory\n", argv[0]);
	}
	else
	{
		child_pid = fork();
		if (child_pid == 0)
		{
			av[0] = buf;
			av[1] = NULL;
			if (execve(buf, av, NULL) == -1)
			{
				printf("failed to execute\n");
			}
		}
		else
		{
			wait(&status);
		}
	}
	printf("$ ");
	getline(&buf, &n, stdin);
	return (0);
}
