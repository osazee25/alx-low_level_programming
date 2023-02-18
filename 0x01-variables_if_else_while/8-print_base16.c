#include <stdio.h>
#include <stdlib.h>
/**
 * main - a program that prints all the numbers of base 16 in lower case
 * Return: 0
 */
int main(void)
{
	int n;

	char ch;

	for (n = 0; n <= 9; n++)
	putchar(n);

	for (ch = 'a'; ch <= 'f'; ch++)
	putchar(ch);

	putchar('\n');
	return (0);
}
