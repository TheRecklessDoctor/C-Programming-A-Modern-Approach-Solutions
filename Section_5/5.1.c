#include <stdio.h>

int main()
{
	int num;
	printf("Enter a number: ");
	scanf("%d", &num);
	
	int digits;
	if(num >= 0 && num <= 9)
	{
		digits = 1;
	}else if(num >= 10 && num <= 99)
	{
		digits = 2;
	}else if(num >= 100 && num <= 999)
	{
		digits = 3;
	}else
	{
		digits = 4;
	}

	printf("The number %d has %d digits\n", num, digits);
	return 0;
}
