#include "main.h"

/**
 * prip - helper fun
 * @n: int
 * @x: int
 * Return: 0 || 1
 */

int prip(int n, int x)
{
	if (x < n)
	{
	if (n % x == 0)
	{
		return (0);
	}
	else
	{
		return (prip(n, x + 1));
	}
	}
	else
	{
		return (1);
	}
}

/**
 * is_prime_number - return 1  if prime and zero if not
 * @n: num
 * Return: 1 || 0
 */

int is_prime_number(int n)
{
	if (n < 0)
	{
		n = -n;
	}
	if (n == 1)
	{
		return (0);
	}
	else if (n == 2)
	{
		return (1);
	}
	else
	{
		return (prip(n, 2));
	}
}
