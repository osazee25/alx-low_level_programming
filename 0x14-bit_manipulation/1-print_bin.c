#include <stdio.h>
#include "main.h"

/**
 * print_binary - program to print binary representation
 * @n: integer
 * Return: binary
 */

void print_binary(unsigned long int n)
{
	/* Initialize mask to the most significant bit*/
	unsigned int mask = 1 << (sizeof(unsigned int) * 8 - 1);

	/*Flag to skip leading zeros*/
	int leading_zeros = 1;

	while (mask > 0)
	{
	/*Check if the bit at the current mask position is set*/
		if (n & mask)
	{
	/*Set the flag to false once a non-zero bit is encountered*/

		leading_zeros = 0;

		_putchar('1');
	}
		else if (!leading_zeros)
		{
			_putchar('0');
		}
	/*Shift the mask to the right*/

		mask >>= 1;
	}

	if (leading_zeros)
	{
	/*Print a zero if the number is zero*/
		_putchar('0');
	}
}
