#include <stdio.h>
/**
 * main - a program that prints the  combination of two digits
 * Return: 0
 */
int main(void)
{
	int units;
	int tens;

	for (tens = '0'; tens <= '9'; tens++)
	{
	for (units = '0'; units <= '9'; units++)
	{
	if (!((tens == units) || (tens > units)))
	{
	putchar(tens);
	putchar(units);
	if (!(tens == '8' && units == '9'))
	{
	putchar(',');
	putchar(' ');
	}
	}
	}
	}
}
