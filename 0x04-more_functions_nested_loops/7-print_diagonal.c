#include "main.h"
/**
 * print_diagonal - draws a diagonal line
 * @n: number of times \ is printed
 * Return: void
 */
void print_diagonal(int n)
{
	int x;

	if (n <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (x = 0; x < n; x++)
	{
	_putchar(47);
	_putchar('\n');
	}
	}
}
