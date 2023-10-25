#include "main.h"

/**
 * hprime - is prime helper
 *
 * @x: helper number
 * @n: number
 *
 * Return: like is prime
 */

int hprime(int x, int n)
{
	if (x < n)
	{
		if (!(n % x))
			return (0);

		return (hprime(x + 1, n));
	}
	else
		return (1);
}

/**
 * is_prime_number - to know if prime or not
 *
 * @n: number
 *
 * Return: 1 if prime 0 otherwise
 */

int is_prime_number(int n)
{
	if (n < 0)
		n = -n;
	if (n == 1)
		return (0);
	if (n == 2)
		return (1);
	return (hprime(2, n));
}
