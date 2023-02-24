#include "main.h"
/**
 * print_line - function that draws a straight line on the terminal
 * @n: the number of times the character _ is drawn
 * Return: empty
 */
void print_line(int n)
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
	_putchar(95);
	}
	_putchar('\n');
	}
}
