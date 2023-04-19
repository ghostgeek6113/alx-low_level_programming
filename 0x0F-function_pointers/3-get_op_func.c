#include "3-calc.h"
#include <stdlib.h>

/**
 * get_op_func -  Selects the correct function to perform
 * the operation asked by the user
 * @s: operator
 * Return: A pointer to the function that corresponds to the operator
 * given as a parameter
 */

int (*get_op_func(char *s))(int, int)
{
	op_t operations[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL},
	};

	int i = 0;

	while (operations[i].op != NULL && *(operations[i].op) != *s)
		i++;

	return (operations[i].f);
}
