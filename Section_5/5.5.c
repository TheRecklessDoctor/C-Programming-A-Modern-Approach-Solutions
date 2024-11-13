#include <stdio.h>


int main()
{
	int taxableIncome;
	float tax;

	printf("Enter taxable income: ");
	scanf("%d", &taxableIncome);

	if(taxableIncome <= 750)
	{
		tax = 0.01 * taxableIncome;
	}
	else if(taxableIncome > 750 && taxableIncome <= 2250)
	{
		tax = 7.50 + (0.02 * (taxableIncome - 750));
	}
	else if(taxableIncome > 2250 && taxableIncome <= 3750)
	{
		tax = 37.50 + (0.03 * (taxableIncome - 2250));
	}
	else if(taxableIncome > 3750 && taxableIncome <= 5250)
	{
		tax = 82.50 + (0.04 * (taxableIncome - 3750));
	}
	else if(taxableIncome > 5250 && taxableIncome <= 7000)
	{
		tax = 142.50 + (0.05 * (taxableIncome - 5250));
	}
	else
	{
		tax = 230.00 + (0.06 * (taxableIncome - 7000));
	}
	printf("Tax: %f", tax);
	return 0;
	
}
