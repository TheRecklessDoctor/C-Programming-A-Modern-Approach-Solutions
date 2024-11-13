#include <stdio.h>

int main()
{
    int num, denom;
    printf("Enter a fraction: ");
    scanf("%d/%d", &num, &denom);

    int m = num < denom ? denom : num;
    int n = num < denom ? num : denom;

    while(n != 0)
    {
        int remainder = m % n;
        m = n;
        n = remainder;
    }

    num /= m;
    denom /= m;

    printf("In lowest terms: %d/%d", num, denom);
    return 0;
}