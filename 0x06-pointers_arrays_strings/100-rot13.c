#include "main.h"

/**
 * rot13 - encodes a string using rot13.
 * @s: str
 * Return: the code
 */

char *rot13(char *s)
{
	int i;
	int j;
	char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
	for (j = 0; j < 52; j++)
	{
		if (s[i] == data1[j])
		{
		s[i] = datarot[j];
		break;
		}
	}
	}
	return (s);
}
