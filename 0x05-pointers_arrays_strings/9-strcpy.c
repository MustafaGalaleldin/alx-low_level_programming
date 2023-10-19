#include "main.h"
/**
 * char *_strcpy - o
 * @dest: in
 * @src: in
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i]);
	return (dest);
}

