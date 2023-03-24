#include <stdio.h>
#include "main.h"
/**
* print_remaining_days - takes a date and prints how many days are
i* left in the year, taking leap years into account
* @month: month in number format
* @day: day of month
* @year: year
* Return: void
*/
void print_remaining_days(int month, int day, int year)
{
int days_in_month[] = {0, 31, -1, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int i, days = 0;
for (i = 1; i < month; i++)
{
days += days_in_month[i];
}
if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0))
{
days_in_month[2] = 29;
}
days += day;
printf("Day of the year: %d\n", days);
if (days > 365 || (days == 365 && !(year % 4 == 0 && (year % 100 != 0 || year % 400 == 0))))
{
printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
}
else
{
printf("Remaining days: %d\n", 365 - days);
}
}
