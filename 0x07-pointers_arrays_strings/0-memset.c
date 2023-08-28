#include "main.h"

/**
 * _memset - fills memory with a constant byte.
 * @s: in string
 * @b: char to fill with
 * @n: num of bytes
 * Return: pointer to memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
