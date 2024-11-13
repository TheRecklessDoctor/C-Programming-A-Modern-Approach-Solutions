#include <stdio.h>

int main(void)
{
    float radius;

    printf("Enter the radius of the sphere: ");
    scanf("%f", &radius);

    float volume = (4.0f/3.0f) * (radius * radius * radius);

    printf("Volume of a sphere with radius %.1f is %.1f", radius, volume);
    return 0;
}
