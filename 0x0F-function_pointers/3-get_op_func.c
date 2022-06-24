#include "3-calc.h"

int (*get_op_funct(char *s))(int, int)
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

	for (i = 0; s[i] ; i++)
	{
	}

	if (i != 1)
		return (NULL);
	i = 0;

	while (ops[i].op != NULL && s[0] != ops[i].op[0])
		i++;

	return (ops[i].f);
}
