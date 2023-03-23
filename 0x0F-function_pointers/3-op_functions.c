#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * op_add - adds two numbers
 * @a: first number
 * @b: second number
 * Return: addition
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - find the difference between two numbers
 * @a: ...
 * @b: ...
 * Return: ...
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - find the product of two numbers
 * @a: ...
 * @b: ...
 * Return: ...
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - divides a by b
 * @a: numerator
 * @b: denominator
 * Return: ...
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - finds the modulus of two numbers
 * @a: numerator
 * @b: denominator
 * Return: remainder
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
