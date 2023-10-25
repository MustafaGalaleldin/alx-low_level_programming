#include "main.h"

/**
 * sqrt_helper - helper to _sqrt_recursion
 *
 * @n: number
 * @x: helper number
 *
 * Return: sqrt or -1 if non
 */

int sqrt_helper(int x, int n)
{
	if ((x * x) == n)
		return (x);
	else if (x < n)
		return (sqrt_helper(x + 1, n));
	else
		return (-1);
}

/**
 * _sqrt_recursion - returns the natural square root of a number.
 *
 * @n: number
 *
 * Return: sqrt or -1 if not found
 */

int _sqrt_recursion(int n)
{
	return (sqrt_helper(1, n));
}
