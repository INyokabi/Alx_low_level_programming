#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - function that returns a pointer to a new allocated space in memory
 * which contains a copy of the string given as a parameter
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	char *s;
	int y, z = 0;

	if (str == NULL)
		return (NULL);
	y = 0;

	while (str[y] != '\0')
		y++;
	s = malloc(sizeof(char) * (y + 1));

	if (s == NULL)
		return (NULL);

	for (z = 0; str[z]; z++)
		s[z] = str[z];
	return (s);
}
