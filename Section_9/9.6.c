#include <stdio.h>
#include <math.h>

double calcPolynomial(double x);

int main(void){

    double x;
    printf("Enter the value for x: ");
    scanf("%lf", &x);

    double res = calcPolynomial(x);

    printf("The value of the polynomial is: %.3lf", res);

    return 0;

}

double calcPolynomial(double x){
    double res = 3*pow(x, 5) + 2*pow(x, 4) - 5*pow(x, 3) - pow(x, 2) + 7*pow(x,1) - 6;

    return res;
}