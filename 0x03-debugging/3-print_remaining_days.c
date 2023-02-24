#include <stdio.h>
#include "main.h"
/**
 * print_remaining_days - tales a date and prints how many days are
 * left in a year, taking leap year into account
 * @month: month in number format
 * @year: year
 * @day: day
 * Return: void
 */
void print_remaining_days(int month, int day, int year)
{
	if ((year % 100 == 0 && year % 400 == 0) || (year % 4 == 0))
	{
	if (month > 2 && day >= 60)
	{
	day++;
	}
	printf("Day of the year: %d\n", day);
	printf("Remaining days: %d\n", 366 - day);
	}
	else
	{
	if (month == 2 && day == 60)
	{
	printf("Day of the year: %d\n", day);
	printf("Remaining days: %d\n", 365 - day);
	}
	}
}
