#include <stdio.h>
#include "main.h"

/**
 * _strchr - locates a character in a string
 * @c: A character in a string
 * @s: A string
 * Return: a pointer to the first occurrence of
 * the character c in the string s
 */

char *_strchr(char *s, char c)
{
	int a;

	for (a = 0; s[a] >= '\0'; a++)
	{
		if (s[a] == c)
			return (s + a);
	}

	return ('\0');
}
