#include <stdio.h>

int main()
{
	int num;
	printf("Enter a two-digit-number: ");
	scanf("%d", &num);

	int first, second;
	first = num%10;
	num = num/10;
	second = num;

	printf("The reversal is: %d%d", first, num);
	return 0;
}
