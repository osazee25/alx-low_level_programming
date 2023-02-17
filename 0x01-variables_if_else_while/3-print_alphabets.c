#include <stdio.h>
#include <stdlib.h>
/**
 * main - a function that prints the alphabets in lower case and then
 * in upper case
 * Return: 0
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
	putchar(ch);
	}

	for (ch = 'A'; ch <= 'Z'; ch++)
	{
	putchar(ch);
	}

	putchar('\n');
	return (0);
}
