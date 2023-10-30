#include "main.h"
#include <stdlib.h>

/**
 * _strlen - l
 * @s: input
 * Return: length
 */
int _strlen(char *s)
{
	int count = 0;

	if (s)
	{
		while (*s != '\0')
		{
			count++;
			s++;
		}
	}
	return (count);
}

/**
 * _memcpy - copies memory area
 * @dest: destination
 * @src: source
 * @n: num of bytes
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		dest[x] = src[x];
	}
	return (dest);
}

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 *
 * @str: string
 *
 * Return: pointer or null
 */

char *_strdup(char *str)
{
	int i = _strlen(str) + 1;
	char *c = malloc(i);

	if (str == NULL)
		return (NULL);
	if (c)
	{
		_memcpy(c, str, i);
		return (c);
	}
	return (NULL);
}
