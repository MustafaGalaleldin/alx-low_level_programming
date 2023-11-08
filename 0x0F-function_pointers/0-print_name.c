#include "function_pointers.h"
/**
 * print_name - prints a name
 *
 * @name: to be printed
 * @f: pointer to func
 *
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
