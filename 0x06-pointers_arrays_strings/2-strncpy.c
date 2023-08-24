#include "main.h"

/**
 * _strncpy - that copies a string by bytes
 * @dest: string
 * @src: source string
 * @n: bytes
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (src[i] == '\0')
		{
			dest[i] = '\0';
		}
		else
		{
	dest[i] = src[i];
		}
	}
	return (dest);
}
