#include <stdio.h>
#include "main.h"

/**
 * print_remaining_days - takes a date and prints how many days are
 * left in the year, taking leap years into account
 * @month: month in number format
 * @day: day of month
 * @year: year
 * Return: void
 */

void print_remaining_days(int month, int day, int year)
{
	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
	{
	/*Leap year calculation*/
	if (month > 2)
	{
	/*If it's a leap year and past February, you need to add 1 to day*/
		day++;
	}
	
	/*Check for an invalid date*/
	if (day > 366)
	{
		printf("Invalid date: %02d/%02d/%04d\n", month, day - 31, year);
	}
	else
	{
		printf("Day of the year: %d\n", day);
		printf("Remaining days: %d\n", 366 - day);
	}
	}
	else
	{
	/*Non-leap year calculation*/
	/* Check for an invalid date*/
	if (day > 365)
	{
		printf("Invalid date: %02d/%02d/%04d\n", month, day - 31, year);
	}
	else
	{
		printf("Day of the year: %d\n", day);
		printf("Remaining days: %d\n", 365 - day);
	}
	}
}