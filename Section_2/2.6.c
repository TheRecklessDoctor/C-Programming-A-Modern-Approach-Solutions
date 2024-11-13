#include <stdio.h>

int main(void)
{
    int x;
    printf("Enter an integer value for x: ");
    scanf("%d", &x);

    printf("%d", ((((3*x + 2)*x - 5)*x -1)*x + 7)*x -6);
    return 0;
}