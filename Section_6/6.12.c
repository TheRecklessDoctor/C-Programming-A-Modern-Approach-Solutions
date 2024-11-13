#include <stdio.h>

int main(void)
{
    int n;
    printf("Enter an integer to approximate e: ");
    scanf("%d", &n);

    float epsilon;
    printf("Enter a value for epsilon: ");
    scanf("%f", &epsilon);

    float e = 1;
    int fac = 1;
    float term;
    for(int i = 1, term = 1.0f; term < epsilon; ++i)
    {
        fac *= i;
        term = 1.0f/fac;
        e += term;
    }

    printf("The estimated value of e: %f", e);
}