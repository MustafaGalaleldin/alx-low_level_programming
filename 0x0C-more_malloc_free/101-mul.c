#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * _isdigit - upper
 * @c: input
 * Return: 1 if digit
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}

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
 * big_multiply - multiply two big number strings
 * @s1: the first big number string
 * @s2: the second big number string
 *
 * Return: the product big number string
 */
char *multi(char *s1, char *s2)
{
	char *p;
	int l1, l2, a, b, c, x;

	l1 = _strlen(s1);
	l2 = _strlen(s2);
	p = malloc(a = x = l1 + l2);
	if (!p)
		printf("Error\n"), exit(98);
	while (a--)
		p[a] = 0;

	for (l1--; l1 >= 0; l1--)
	{
		if (!_isdigit(s1[l1]))
		{
			free(p);
			printf("Error\n"), exit(98);
		}
		a = s1[l1] - '0';
		c = 0;

		for (l2 = _strlen(s2) - 1; l2 >= 0; l2--)
		{
			if (!_isdigit(s2[l2]))
			{
				free(p);
				printf("Error\n"), exit(98);
			}
			b = s2[l2] - '0';

			c += p[l1 + l2 + 1] + (a * b);
			p[l1 + l2 + 1] = c % 10;

			c /= 10;
		}
		if (c)
			p[l1 + l2 + 1] += c;
	}
	return (p);
}


/**
 * main - multiply two big number strings
 * @argc: the number of arguments
 * @argv: the argument vector
 *
 * Return: Always 0 on success.
 */
int main(int argc, char **argv)
{
	char *pr;
	int a, c, x;

	if (argc != 3)
		printf("Error\n"), exit(98);

	x = _strlen(argv[1]) + _strlen(argv[2]);
	pr = multi(argv[1], argv[2]);
	c = 0;
	a = 0;
	while (c < x)
	{
		if (pr[c])
			a = 1;
		if (a)
			_putchar(pr[c] + '0');
		c++;
	}
	if (!a)
		_putchar('0');
	_putchar('\n');
	free(pr);
	return (0);
}
