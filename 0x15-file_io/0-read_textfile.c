#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: File name
 * @letters: Number of letters
 * Return: Number of letters printed and read
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t q;
	ssize_t r;
	ssize_t x;

	x = open(filename, O_RDONLY);
	if (x == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	q = read(x, buf, letters);
	r = write(STDOUT_FILENO, buf, q);
	free(buf);
	close(x);
	return (r);
}
