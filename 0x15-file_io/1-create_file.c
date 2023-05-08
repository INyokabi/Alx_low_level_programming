#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_file - Create a function that creates a file
 * @filename:  is the name of the file to create
 * and text_content is a NULL terminated string to write to the file
 * @text_content: pointer pointing to a string to write to the file.
 *
 * Return: 1 on success, -1 on failure
 *
 */
int create_file(const char *filename, char *text_content)
{
	int x, b, a = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (a = 0; text_content[a];)
			a++;
	}
	x = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	b = write(x, text_content, a);
	if (x == -1 || b == -1)
		return (-1);
	close(x);
	return (1);
}
