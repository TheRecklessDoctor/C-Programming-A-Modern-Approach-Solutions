#include <stdio.h>

int main(void)
{
    float radius = 10.0f;
    float volume = (4.0f/3.0f) * (radius * radius * radius);

    printf("Volume of a sphere with radius %.1f is %.1f", radius, volume);
    return 0;
}

