#include <stdio.h>
#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: File name
 * @letters: Number of letters
 * Return: Number of letters printed and read
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	if (filename == Null)
	{
		return (0);
	}

	FILE *file = fopen(filename, "r");

	if (file == NULL)
	{
		return (0);
	}
		/* malloc buffer */
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	/* read */
	n_read = read(fd, buffer, letters);
	if (n_read == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	/* write */
	n_wrote = write(STDOUT_FILENO, buffer, n_read);
		if (n_wrote == -1)
		{
			free(buffer);
			close(fd);
			return (0);
		}
	close(fd);
	return (n_read);
}
