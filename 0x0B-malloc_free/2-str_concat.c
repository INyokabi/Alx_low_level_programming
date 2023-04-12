#include "main.h"
#include <stdlib.h>

/**
 * str_concat -  function that concatenates two strings
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	int y, z;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";
	y = z = 0;

	while (s1[y] != '\0')
		y++;
	while (s2[z] != '\0')
		z++;
	concat = malloc(sizeof(char) * (y + z + 1));
		if (concat == NULL)
		return (NULL);
	y = z = 0;

	while (s1[y] != '\0')
	{
		concat[y] = s1[y];
		y++;
	}

	while (s2[z] != '\0')
	{
		concat[y] = s2[z];
		y++, z++;
	}
	concat[y] = '\0';
	return (concat);
}
