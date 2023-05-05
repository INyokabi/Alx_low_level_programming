#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint -  function that converts a binary number to an unsigned int
 * @b: is pointing to a string of 0 and 1 chars
 *
 * Return: the number that has been converted
 * 0 if there is one or more chars in the string b that is not 0 or 1
 * b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	int y;
	unsigned int bin_num = 0;

	if (!b)
		return (0);
			for (y = 0; b[y]; y++)
			{
				if (b[y] < '0' || b[y] > '1')
					return (0);
				bin_num = 2 * bin_num + (b[y] - '0');
			}
	return (bin_num);
}
