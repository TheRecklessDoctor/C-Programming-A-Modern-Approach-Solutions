#include <stdio.h>

int main()
{
    int n;
    printf("Ente an integer value: ");
    scanf("%d", &n);

    for(int i = 0; i <= n; ++i)
    {
        if((i*i)%2 == 0 && (i*i) <= n)
        {
            printf("%d\n", i*i);
        }
    }

    return 0;
}