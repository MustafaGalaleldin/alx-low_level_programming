#include "function_pointers.h"

/**
 * print_name - that prints a name
 * @name: to print
 * @f: func
 * Return: non
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
