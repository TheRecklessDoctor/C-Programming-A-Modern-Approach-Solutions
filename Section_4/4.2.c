#include <stdio.h>

int main()
{
	int first, second, num;
	printf("Enter a three digit number: ");
	scanf("%d", &num);

	first = num % 10 ;
	num = num /10;
	second = num % 10;
	num = num / 10;
	printf("%d%d%d", first, second, num);

	return 0;
}
