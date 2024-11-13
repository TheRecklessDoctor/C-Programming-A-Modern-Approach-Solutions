#include <stdio.h>

int main(void)
{
    float startBalance;
    float interest;
    float monthly;

    printf("Enter the starting balance: ");
    scanf("%f", &startBalance);
    printf("Enter interest rate: ");
    scanf("%f", &interest);
    printf("Enter monthly payment: ");
    scanf("%f", &monthly);

    float interest_rate = (interest/100 )/12.0 + 1.0;
    float first = startBalance*(interest_rate) - monthly;
    float second = first*(interest_rate) - monthly;
    float third = second*(interest_rate) - monthly;

    printf("Balance remaining after first payment: %.2f\n", first);
    printf("Balance remaining after second payment: %.2f\n", second);
    printf("Balance remaining after third payment: %.2f\n", third);

    return 0;
}