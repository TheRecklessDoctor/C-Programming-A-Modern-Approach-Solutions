#include <stdio.h>


void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones);

int main(void){
	int dollars, twenties, tens, fives, ones;
	printf("Enter an amount in dollars: ");
	scanf("%d", &dollars);

	pay_amount(dollars, &twenties, &tens, &fives, &ones);

	printf("Twenties: %d\n", twenties);
	printf("Tens: %d\n",tens);
	printf("Fives: %d\n", fives);
	printf("Ones: %d\n", ones);

	return 0;
}


void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones){
	*twenties = dollars / 20;
	dollars = dollars - 20 * (*twenties);

	*tens = dollars / 10;
	dollars = dollars - 10 * (*tens);

	*fives= dollars / 5;
	dollars = dollars - 5 * (*fives);

	*ones= dollars / 1;
	dollars = dollars - 1 * (*ones);

}


