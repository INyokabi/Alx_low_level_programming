#include "main.h"

/**
 * wildcmp - Compare strings
 * @a: pointer to string params
 * @b: pointer to string params
 * Return: 0 (Always on Success)
 */

int wildcmp(char *a, char *b)
{
	if (*a == '\0')
	{
		if (*b != '\0' && *b == '*')
		{
			return (wildcmp(a, b + 1));
		}
		return (*b == '\0');
	}

	if (*b == '*')
	{
		return (wildcmp(a + 1, b) || wildcmp(a, b + 1));
	}
	else if (*a == *b)
	{
		return (wildcmp(a + 1, b + 1));
	}
	return (0);
}

