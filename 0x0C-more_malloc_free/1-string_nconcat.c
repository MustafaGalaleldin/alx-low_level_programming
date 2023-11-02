#include "main.h"
#include <stdlib.h>
/**
 * _strlen - l
 * @s: input
 * Return: length
 */
unsigned int _strlen(char *s)
{
	unsigned int count = 0;

	if (!s)
		return (0);
	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);
}
/**
 * _strncat - concatenates two strings by bytes
 * @dest: str
 * @src: str
 * @n: integer (number of bytes)
 * Return: dest
 */

char *_strncat(char *dest, char *src, unsigned int n)
{
	unsigned int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (j = 0; i < n; j++, i++)
		dest[i] = src[j];
	dest[i] = '\0';
	return (dest);
}
/**
 * string_nconcat - concatenates two strings
 *
 * @s1: str 1
 * @s2: str 2
 * @n: num of bytes
 *
 * Return: pointer to concatenated str or NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len;
	char *p;

	if (n >= _strlen(s2))
		len = _strlen(s1) + _strlen(s2) + 1;
	else
		len = _strlen(s1) + n + 1;
	p = malloc(len);
	if (!p)
		return (NULL);
	p = _strncat(s1, s2, len);
	return (p);
}

