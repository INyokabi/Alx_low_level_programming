#include "main.h"
/**
 * _memset - fill a block of memory with a specific value
 * @a: starting address of memory to be filled
 * @b: the desired value
 * @c: number of bytes to be changed
 *
 * Return: changed array with a new value for c bytes
 */
char *_memset(char *a, char b, unsigned int c)
{
	int i = 0;


	for (; c > 0; i++)
	{

		a[i] = b;
		c--;
	}
	return (a);
}
