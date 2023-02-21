#include "main.h"
/**
 * _abs - computes the absolute value of any integer
 * @c: integer to be computed
 * Return: absolute value or zero
 */
int _abs(int c)
{
	if (c < 0)
	{
	int abs_val = c * -1;

	return (abs_val);
	}
	return (c);
}
