#include <stdio.h>
/**
 * main - a program that prints three digit unique numbers
 * Return: 0
 */
int main(void)
{
	int units;
	int tens;
	int hun;

for (hun = 0; hun <= 9; hun++)
	{
for (tens = 0; tens <= 9; tens++)
	{
for (units = 0; units <= 9; units++)
	{
if (!((units == tens) || (tens == hun) || (tens > units) || (hun > tens)))
	{
	putchar(hun);
	putchar(tens);
	putchar(units);
if (!(units == 9 && tens == 8 && hun == 7))
	{
	putchar(',');
	putchar(' ');
	}
	}
	}
	}
	}
putchar('\n');
return (0);
}
