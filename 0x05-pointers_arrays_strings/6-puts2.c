#include "main.h"

/**
* puts2 - prints every other character of a string
* starting with the first character,followed by a new line
* @str: the string containing the characters
* Return: ()
*/

void puts2(char *str)
{
	int index = 0, len = 0;

	while (str[index++])
		len++;

	for (index = 0; index < len; index += 2)
		_putchar(str[index]);

	_putchar('\n');
}
