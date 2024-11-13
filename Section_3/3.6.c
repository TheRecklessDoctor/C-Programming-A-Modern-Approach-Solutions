#include <stdio.h>

int main(void)
{
	int firstNum;
	int firstDenom;
	int secondNum;
	int secondDenom;

	printf("Enter two fractions seperated by a plus sign: ");
	scanf("%d/%d+%d/%d", &firstNum, &firstDenom, &secondNum, &secondDenom);

	int num;
	int denom;

	num = firstNum * secondDenom + secondNum * firstDenom;
	denom = firstDenom * secondDenom;

	printf("The sum is %d/%d", num, denom);
	return 0;
}
