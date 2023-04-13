#include "main.h"
#include <stdlib.h>

/**
 * array_range - function that creates an array of integers
 * @min: min number of elements
 * @max: max number of elements
 *
 * Return: array pointer address
 * NULL if it fails
*/

int *array_range(int min, int max)
{
	int n, *ptr;

	if (min > max)
		return (NULL);

	ptr = malloc((max - min + 1) * sizeof(int));

	if (ptr == NULL)
		return (NULL);
	for (n = 0; min <= max; n++)
	{
		ptr[n] = min;
		min++;
	}
	return (ptr);
}
