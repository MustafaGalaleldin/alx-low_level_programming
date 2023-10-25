#include "main.h"

/**
 * _strlen_recursion - returns the length of a string.
 *
 * @s: string
 *
 * Return: length
 */

int _strlen_recursion(char *s)
{
	if (*s == 0)
		return (0);

	return (_strlen_recursion(s + 1) + 1);
}

/**
 * helper - palindrome helper
 *
 * @x: helper number
 * @s: string
 * @n: strlen
 *
 * Return: 1 or 0
 */

int helper(int x, char *s, int n)
{
	if (*s == *(s + n - (2 * x)))
	{
		if ((n + 1) % 2)
		{
			if (x == (n + 2) / 2)
				return (1);
		}
		else
		{
			if (x == (n + 1) / 2)
				return (1);
		}
		s++;
		return (helper(x + 1, s, n));
	}
	else
		return (0);
}
/**
 * is_palindrome - palindrome string or not
 *
 * @s: string
 *
 * Return: 1 if a string is a palindrome and 0 if not.
 */

int is_palindrome(char *s)
{
	int n = _strlen_recursion(s) - 1;

	if (*s == '\0')
		return (1);
	return (helper(0, s, n));
}
