#include "main.h"

/**
 * _islower - Checks for lowercase character
 * @c: character being checked
 *Return: 1 if character c is lowercase, otherwise 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
