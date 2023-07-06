#include <stdio.h>

/**
 * set_bit - a function that sets the bit to 1
 * @n: the integer
 * @index: the index
 * Return: bit
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int set = 1;

	if (index > 32)
	{
		return (-1);
	}

	else
	{

		*n = *n | (set << index);
	}

	return (1);
}
