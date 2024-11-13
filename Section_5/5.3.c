#include <stdio.h>

int main()
{
	float commission, value;
	int shares;

	printf("Enter the number of shares: ");
	scanf("%d", &shares);

	printf("Enter the value per share: ");
	scanf("%d", &value);

	if(value*shares < 2500.00f)
		commission = 30.00f + .017f * (value * shares);
	else if(value * shares < 6250.00f)
		commission = 56.00f + .0066f * (value * shares);
	else if(value * shares < 20000.00f)
		commission = 76.00f + .0034f * (value * shares);
	else if(value * shares < 50000.00f)
		commission = 100.00f + .0022f* (value * shares);
	else if(value * shares < 500000.00f)
		commission = 155.00f + .0011f* (value * shares);
	else
		commission = 255.00f + .0009f * (value * shares);

	if (commission < 39.00f)
	{
		commission = 39.00f;
	}

	printf("Commission: $%.2f\n", commission);
	return 0;
}

