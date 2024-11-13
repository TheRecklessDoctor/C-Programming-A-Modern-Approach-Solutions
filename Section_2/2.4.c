#include <stdio.h>

int main(void)
{
    float dollarsCents;
    
    printf("Enter an amount in dollars and cents: ");
    scanf("%f", &dollarsCents);

    printf("With tax added: %.2f", dollarsCents + (0.05 * dollarsCents));
    return 0;
}