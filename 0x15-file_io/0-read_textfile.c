#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: file to read
 * @letters: number of letters it should read and print
 * Return: actual number of letters it could read and print
 * return 0 if file can not be opened or read, filename is NULL
 * write fails or does not write the expected amount of bytes
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *p;
	ssize_t fd, wr, re;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	p = malloc(sizeof(char) * letters);
	re = read(fd, p, letters);
	wr = write(STDOUT_FILENO, p, re);

	free(p);
	close(fd);
	return (wr);
}
