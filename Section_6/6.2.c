#include <stdio.h>

int main()
{
    int a, b, m, n;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    m = a < b ? b : a;
    n = a < b ? a : b;

    while(n != 0)
    {
        int remainder = m % n;
        m = n;
        n = remainder;
    }

    printf("Greatest Common Divisor: %d\n", m);
    return 0;
}