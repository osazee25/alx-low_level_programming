#include <stdio.h>
#include "main.h"
/**
 * flip_bits - a function that flips the bit a given no of bit required
 * @n: the first number
 * @m: the second number
 * Return: n_bit (the bit required)
 */


unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int n_bit;
	unsigned long int x_or;

	x_or = n ^ m;
	n_bit = 0;

	while (x_or > 0)
	{
		n_bit += x_or & 1;
		x_or >>= 1;
	}
	return (n_bit);
}
