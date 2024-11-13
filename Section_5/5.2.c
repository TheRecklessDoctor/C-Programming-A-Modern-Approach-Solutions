#include <stdio.h>


int main()
{
	int hour, min;
	printf("Enter a 24 hour time: ");
	scanf("%d:%d", &hour, &min);

	if(hour == 24 )
	{
		hour = 12;
		printf("Equivalent 12-hour time: %d:%2d AM", hour, min);

	}else if(hour >= 13 && hour <= 23)
	{
		hour -= 12;
		printf("Equivalent 12-hour time: %d: %2d PM", hour, min);
	}else
	{
		printf("Equivalent 12-hour time: %d: %2d AM", hour, min);
	}

	return 0;
}
