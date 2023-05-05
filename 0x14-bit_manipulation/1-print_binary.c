#include <stdio.h>
#include "main.h"

/**
 * print_binary - function that prints the binary representation of a number
 * @n: is the number to printed in binary
 */
void print_binary(unsigned long int n)
{
	int a, count = 0;
	unsigned long int present;

	for (a = 63; a >= 0; a--)
	{
		present = n >> a;
		if (present & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
