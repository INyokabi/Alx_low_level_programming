#include "main.h"

/**
* puts_half - prints half of a string, followed by a new line
* @str: The string being printed
* Return: ()
*/

void puts_half(char *str)
{
	int n, index = 0, l = 0;

	while (str[index++])
		l++;

	if ((l % 2) == 0)
		n = l / 2;

	else
		n = (l + 1) / 2;

	for (index = n; index < l; index++)
		_putchar(str[index]);

	_putchar('\n');
}
