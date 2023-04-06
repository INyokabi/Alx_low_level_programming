#include "main.h"

/**
 * find_root - A function that returns the natural square root of a number.
 * @n:number to be evaluated
 * @r: root
 * Return: square root
 */

int find_root(int n, int r)
{
	if ((r * r) > n)
	{
		return (-1);
	}
	if ((r * r) == n)
	{
		return (r);
	}
	return (find_root(n, r + 1));
}

/**
 * _sqrt_recursion - Returning Square root of a number
 * @n: number
 * Return: square root of the number
 */


int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (find_root(n, 0));
}
