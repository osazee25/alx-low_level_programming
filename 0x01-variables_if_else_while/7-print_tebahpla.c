#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that prints lowercase alphabets in reverse
 * Return: 0
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch++)
	{
	putchar(ch);
	}
	putchar('\n');
	return (0);
}
