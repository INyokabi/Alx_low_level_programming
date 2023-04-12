#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - function that returns a pointer to a 2 dimensional of integers
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array
 */

int **alloc_grid(int width, int height)
{
	int **hii;
	int a, b;

	if (width <= 0 || height <= 0)
		return (NULL);
	hii = malloc(sizeof(int *) * height);

	if (hii == NULL)
		return (NULL);

	for (a = 0; a < height; a++)
	{
		hii[a] = malloc(sizeof(int) * width);
		if (hii[a] == NULL)
		{
			for (; a >= 0; a--)
				free(hii[a]);
			free(hii);
			return (NULL);
		}
	}

	for (a = 0; a < height; b++)
	{
		for (b = 0; b < width; b++)
			hii[a][b] = 0;
	}
	return (hii);
}
