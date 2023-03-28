#include "main.h"
#include <stdio.h>

/**
* print_array - prints n elements of an array of integers
* @a: This is an array of integers
* @n: An integer to be printed
* Return: ()
*/

void print_array(int *a, int n)
{
	int index;

	for (index = 0; index < n; index++)
		if (index == n - 1)
		{
			printf("%d", a[index]);
		}
		else
		{
			printf("%d, ", a[index]);
		}
	printf("\n");
}
