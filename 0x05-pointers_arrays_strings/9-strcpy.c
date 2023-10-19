#include "main.h"
/**
 * char *_strcpy - o
 * @dest: in
 * @src: in
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != 0; i++)
		dest[i] = src[i];
	i++;
	dest[i] = '\0';
	return (dest);
}

