#include "main.h"
#include <stddef.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <stdlib.h>
/**
 * read_textfile - reads text file and prints it to std output
 * @filename: name of file
 * @letters: number of letters it should read and print
 *
 * Return:actual no of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t rb, wb;
	char *buff;

	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);
	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDWR);
	if (fd == -1)
		return (0);
	rb = read(fd, buff, letters);
	if (rb == -1)
		return (0);
	wb = write(STDOUT_FILENO, buff, rb);
	if ((wb != rb) || wb == -1)
		return (0);
	return (wb);
}
