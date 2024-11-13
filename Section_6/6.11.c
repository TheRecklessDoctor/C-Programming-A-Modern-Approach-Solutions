#include <stdio.h>

int main(void)
{
    int n;
    printf("Enter an integer to approximate e: ");
    scanf("%d", &n);

    float e = 1;
    int fac = 1;
    for(int i = 1; i<=n; ++i)
    {
        fac *= i;
        e += 1.0f/fac;
        
    }

    printf("The estimated value of e: %f", e);
}