#include "3-calc.h"

/**
 * get_op_func - Returns a pointer to the function that corresponds
 *	         to the operator given as a parameter.
 *
 * @s: The operator passed as an argument
 *
 * Return: A pointer to the corresponding function, or NULL if not found.
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
	int i = 0;

	while (ops[i].op != NULL)
	{
		if (ops[i].op[0] == s[0] && s[1] == '\0')
			return (ops[i].f);
		i++;
	}

	return (NULL);
}

