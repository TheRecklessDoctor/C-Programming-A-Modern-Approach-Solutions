#include <stdio.h>

int main(void)
{
    int total;
    printf("Enter an amount: ");
    scanf("%d", &total);

    int twenty = total/20;
    int ten = (total - 20*twenty)/10;
    int five = (total - 20*twenty - ten*10)/10;
    int one = (total - 20*twenty - ten*10 - five*5);

    printf("$20 bills: %d\n $10 bills: %d\n $5 bills: %d\n $1 bills: %d", twenty, ten, five, one);
    return 0;
}