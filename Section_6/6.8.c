#include <stdio.h>

int main(void)
{
    int n, day;
    printf("Enter number of days in month: ");
    scanf("%d", &n);

    printf("Enter starting day of the week (1 = Sun, 7 = Sat): ");
    scanf("%d", &day);

    for(int i = 1, weekday = 1; i<=n + day -1; ++i)
    {
        if(i < day)
        {
            printf("   ");
        }else
        {
            printf("%3d", weekday++);
        }

        if(i%7 == 0)
        {
            printf("\n");
        }

    }

    return 0;
}