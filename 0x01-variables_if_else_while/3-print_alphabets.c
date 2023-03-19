#include <stdio.h>

/**
 * main - prints the alphabet in lowercase and then in uppercase
 *
 * Return: 0
 */
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')

	{
		putchar(letter);
		letter++;
	}
	char letter = 'A'

	while (letter <= 'Z')

	{
		putchar(letter);
		letter++;
	}
	putchar('\n');

	return (0);
}
