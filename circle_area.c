#include <stdio.h>
float area_of_circle(float);
float power(float);

int main()
{
    float r, area;
    printf("Enter the radius of circle : ");
    scanf("%f", &r);
    area = area_of_circle(r);
    printf("Area of circle = %f", area);
}
float area_of_circle(float r)
{
    float p, A, pi = 3.14;
    p = power(r);
    A = p * pi;
    return A;
}
float power(float r)
{
    int i;
    float n = 1;
    for (i = 0; i < 2; i++)
    {
        n = n * r;
    }
    return n;
}
