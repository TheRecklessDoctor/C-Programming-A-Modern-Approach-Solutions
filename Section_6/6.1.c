#include <stdio.h>


int main(void)
{
    float largest = 0.0f;
    float i = 0.0f;

    while(1)
    {
        printf("Enter a number: ");
        scanf("%f",  &i);

        if(i == 0)
        {
            break;
        }else if(i > largest)
        {
            largest = i;
        }

    }

    printf("The largest number entered was: %f", largest);

    return 0;
}