#include <stdio.h>

int main(void)
{
	int month;
	int day;
	int year;
	printf("Enter a date: ");
	scanf("%d/%d/%d",&month, &day, &year);
	printf("You entered the date: %d%.2d%.2d", year, month, day);
	return 0;
}
