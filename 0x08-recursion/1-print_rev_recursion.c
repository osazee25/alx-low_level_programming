#include "main.h"
/**
 * -print_rev_recursion - print s string in reverse
 *  @s: the string to reverse
 *  Return: Nothing
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}

	s++;
	_print_rev_recursion(s);
	s--;
	_putchar(*s);
}
