#include <stdlib.h>
#include "main.h"

/**
 * _strlen - l
 * @s: input
 * Return: length
 */
int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);
}

/**
 * string_nconcat - concatenates two strings
 * @s1: str1
 * @s2: str2
 * @n: %u
 * Return: pointer or NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int x, y, c;

	if (n >= (unsigned int)_strlen(s2))
	{
		c = _strlen(s1) + _strlen(s2) + 1;
		ptr = malloc(sizeof(*ptr) * c);
	}
	else
	{
		c = _strlen(s1) + n + 1;
		ptr = malloc(sizeof(*ptr) * c);
	}
	if (ptr == NULL)
		return (NULL);
	for (x = 0; x < c; x++)
	{
		if (s1[x] != '\0')
		{
			ptr[x] = s1[x];
		}
		else
		{
			for (y = 0; y < n || s2[y] != '\0'; y++)
			{
				ptr[x] = s2[y];
				x++;
			}
		}
	}
	ptr[x] = '\0';
	return (ptr);
}
