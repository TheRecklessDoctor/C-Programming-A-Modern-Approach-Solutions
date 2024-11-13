#include <stdio.h>

int main(void)
{
    float Balance;
    float interest;
    float monthly;
    int payments;

    printf("Enter the starting balance: ");
    scanf("%f", &Balance);
    printf("Enter interest rate: ");
    scanf("%f", &interest);
    printf("Enter monthly payment: ");
    scanf("%f", &monthly);
    printf("Enter the number of payments: ");
    scanf("%d", &payments);

    float interest_rate = (interest/100 )/12.0 + 1.0;
    for(int i = 1; i <= payments; ++i)
    {
        Balance = Balance * interest_rate - monthly;
        printf("Balance %d: %f\n", i, Balance); 
    }

    return 0;

    

}