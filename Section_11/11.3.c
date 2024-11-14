#include <stdio.h>

void reduce(int numerator, int denominator, int *reduced_numerator, int *reduced_denominator);


int main(void){
	
	int numerator, denominator;
	printf("Enter a fraction: ");
	scanf("%d/%d", &numerator, &denominator);
	
	int reduced_numerator, reduced_denominator;
	reduce(numerator, denominator, &reduced_numerator, &reduced_denominator);

	printf("In lowest terms: %d/%d", reduced_numerator, reduced_denominator);

	return 0;
}


void reduce(int numerator, int denominator, int *reduced_numerator, int *reduced_denominator){
	
	int gcd = 0;
	for(int i = 0; i <=numerator; i++){
		if((numerator % i == 0) && (denominator % i == 0) && (i > gcd)){
			gcd = i;
		}
	}

	*reduced_numerator = numerator / gcd;
	*reduced_denominator = denominator / gcd;
}
