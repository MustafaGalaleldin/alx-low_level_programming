#include "calc.h"
#include "function_pointers.h"
/**
 * get_op_func - selects the correct function to perform the operation
 *
 * @s: operator
 *
 * Return: pointer to the function that corresponds to the operator
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 5;
