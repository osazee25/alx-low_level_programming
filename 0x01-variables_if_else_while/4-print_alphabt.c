#include <stdio.h>
#include <stdlib.h>
/**
 * main - a program that prints the alphabets in lowercase except q and e
 * Return: 0
 */
int main(void)
{
	char  ch = 'a';

	while (ch <= 'z')
	{

	if (ch != 'e' && ch != 'q')
	{
	putchar(ch);
	}
	ch++;

	}

	putchar('\n');
	return (0);
}
