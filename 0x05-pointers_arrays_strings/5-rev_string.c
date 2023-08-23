#include "main.h"

/**
 * rev_string -  reverses a string
 * @s: pointer
 */

void rev_string(char *s)
{
	int length, i;
	char temp;

	for (length = 0; s[length] != '\0'; length++)
		;
	length--;
	for (i = 0; i <= length / 2; i++)
	{
		temp = s[i];
		s[i] = s[length - i];
		s[length - i] = temp;
	}
}
