#include <stdio.h>
#include <stdlib.h>

#define pi 3.14f

int main()
{
    float r;
    float v;

    printf("Enter the radius of the sphere:\n");
    scanf("%f", &r);

    v = (4.0f / 3.0f)* pi * (r * r * r);

    printf("The volume of the sphere is %.2f", v);


    return 0;
}
