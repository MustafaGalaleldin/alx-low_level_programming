#include "main.h"

/**
 * sqh - helper to get sqrt
 * @n: num
 * @r: num to mult
 * Return: sqrt
 */

int sqh(int n, int r)
{
	if (r * r == n)
	{
		return (r);
	}
	else if (r * r < n)
	{
		return (sqh(n, r + 1));
	}
	else
	{
		return (-1);
	}
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: num
 * Return: sqrt
 */

int _sqrt_recursion(int n)
{
	return (sqh(n, 1));
}

