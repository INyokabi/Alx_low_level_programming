#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - Function that searches for an integer
 * @array: Array of integer to be used
 * @size: array size
 * @cmp: Function to compare integers
 * Return: 0 if false, something else otherwise
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (size < 0)
		return (-1);
	if (array == NULL || size == 0 || cmp == NULL)
		return (-1);

	for (a = 0; a < size; a++)
	{
		if (cmp(array[a]) != 0)
			return (a);
	}
	return (-1);
}
