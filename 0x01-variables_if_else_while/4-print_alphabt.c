#include <stdio.h>
#include <stdlib.h>
/**
 * main - a program that prints the alphabets in lowercase except q and e
 * Return: 0
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch != 'e' && ch != 'q'; ch++)
	{
	putchar(ch);
	}

	putchar('\n');
	return (0);
}
