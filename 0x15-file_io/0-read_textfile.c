#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - read a textfile & print to POSIX
 * @filename: path of the file to read
 * @letters: nbr of letter to read & print
 *
 * Return: 0 if not open, 0 if NULL, 0 if write fails
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (w);
}





