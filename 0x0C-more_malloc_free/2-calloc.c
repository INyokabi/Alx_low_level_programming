#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Function that allocates
 * memory for an array using malloc
 * @nmemb: size of array
 * @size: size of each element
 *
 * Return: pointer with new allocated memory
 * or NULL if it fails
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int a;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(nmemb * size);

	if (p == NULL)
		return (NULL);

	for (a = 0; a < (nmemb * size); a++)
		p[a] = 0;

	return (p);
}


