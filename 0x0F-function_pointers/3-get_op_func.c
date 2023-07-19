#include "3-calc.h"
#include <stdlib.h>

/**
 * get_op_func - select function to perform operation
 * @s: operator for argument
 * Return: pointer to function corresponding to the
 * operator given
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL},
	};

	int num = 0;

	while (ops[num].op != NULL && *(ops[num].op) != *s)
		num++;

	return (ops[num].f);
}
