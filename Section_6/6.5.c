#include <stdio.h>


int main()
{
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    while(num > 0)
    {
        int rem = num %10;
        num /= 10;

        printf("%d", rem);
    }

    return 0;
}