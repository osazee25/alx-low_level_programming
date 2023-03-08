#include "main.h"
#include <stdio.h>

/**
 * is_prime_number - returns 1 if a number is prime number
 * @n: the number to be checked
 * Return: integer value
 */

int is_prime_number(int n)
{
	return (check_prime(n, l));
}

/**
 * check_prime - checks if number is prime
 * @n: the number to be checked
 * @i: the iteration times
 * Return: 1 for prime or 0 for composite
 */
int check_prime(int n, int i)
		if (n <= 1)
			return (0);

		if (n % i == 0 && i > 1)
			return (0);

		if ((n / i) < i)
			return (1);

		return (check_prime(n, i + 1));
}