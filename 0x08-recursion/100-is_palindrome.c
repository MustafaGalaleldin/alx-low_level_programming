#include "main.h"

/**
 * strlength - returns the length of a string
 * @s: p to str
 * Return: length
 */

int strlength(char *s)
{
	int i = 0;

	if (*s > '\0')
	{
		i += strlength(s + 1) + 1;
	}
		return (i);
}

/**
 * palih - helper to know if palindrome
 * @s: p to str
 * @t: int
 * Return: int
 */

int palih(char *s, int t)
{
	if (t < (strlength(s) / 2))
	{
		if (s[t] == s[strlength(s) - t - 1])
		{
			palih(s, t + 1);
		}
		else
		{
			return (0);
		}
	}
		return (1);
}

/**
 * is_palindrome - helper to know if palindrome
 * @s: p to str
 * Return: int
 */

int is_palindrome(char *s)
{
	return (palih(s, 0));
}
