#include "main.h"
/**
 * _isalpha - if alpha
 *@c: input
 * Return: 1 if alpha
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
