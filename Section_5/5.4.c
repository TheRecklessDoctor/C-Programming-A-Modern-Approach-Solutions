#include <stdio.h>

int main()
{
	int windForce;
	printf("Enter wind force in knots: ");
	scanf("%d", &windForce);

	if(windForce < 1)
	{
		printf("Calm\n");
	}
	else if(windForce >= 1 && windForce <=3)
	{
		printf("Light air\n");
	}
	else if(windForce >= 4 && windForce <=27)
	{
		printf("Breeze\n");
	}
	else if(windForce >= 28 && windForce <=47)
	{
		printf("Gale\n");
	}
	else if(windForce >= 48 && windForce <=63)
	{
		printf("Storm\n");
	}
	else(windForce > 63)
	{ 
		printf("Hurricane\n");
	}

	return 0;

}
