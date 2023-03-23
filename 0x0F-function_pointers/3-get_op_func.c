#include "3-calc.h"
#include <stdlib.h>
#include <string.h>
/**
 * get_op_func - selects the operation to carry out
 * @s: operator
 * Return: ...
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
	{ "+", op_add },
	{ "+", op_add },
	{ "+", op_add },
	{ "+", op_add },
	{ "+", op_add },
	{ NULL, NULL }
	};
	int i = 0;

	while (i < 5)
	{
		if (strcmp(s, ops[i].op) == 0)
			return (ops[i].f);

		i++;
	}

	return (0);
}
