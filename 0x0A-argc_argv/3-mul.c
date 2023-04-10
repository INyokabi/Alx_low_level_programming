#include <stdio.h>
#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int y, z, a, len, b, digit;

	y = 0;
	z = 0;
	a = 0;
	len = 0;
	b = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;

	while (y < len && b == 0)
	{
		if (s[y] == '-')
			++z;

		if (s[y] >= '0' && s[y] <= '9')
		{
			digit = s[y] - '0';
			if (z % 2)
				digit = -digit;
			a = a * 10 + digit;
			b = 1;
			if (s[y + 1] < '0' || s[y + 1] > '9')

				break;

			b = 0;
		}
		y++;
	}

	if (b == 0)
		return (0);

	return (a);
}


/**
 * main - program that multiplies two numbers
 * @argc: The number of arguments
 * @argv: The array of arguments
 *
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	int result, num1, num2;

	if (argc < 3 || argc > 3)
	{

		printf("Error\n");
		return (1);
	}

	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	result = num1 * num2;

	printf("%d\n", result);

	return (0);
}
