#include "3-calc.h"
#include <stdlib.h>
#include "function_pointers.h"

/**
 * get_op_func - To print the fxn selects the correct function to perform
 * the operation asked by the user
 *
 * @s: Is the operator passed as argument to the program
 *
 * Return: Pointer to the fxn
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

	for (i = 0; (ops[i].op); i++)
	{
		if (strcmp(ops[i].op, s) == 0)
		return (ops[i].f);
	}
	return (NULL);
}

