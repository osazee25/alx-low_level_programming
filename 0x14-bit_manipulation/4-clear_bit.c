#include <stdio.h>
#include "main.h"

/**
 * clear_bit - a function that clears bit at a particular index
 * @n: the integer
 * @index: the index to delete
 * Return: 1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int set = 1;

	if (index > 32)
		return (-1);

	else
	{
		*n = *n & (~(set << index));
	}

	return (1);
}
