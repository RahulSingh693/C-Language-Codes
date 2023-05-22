/*#include <stdio.h>
float area(float); //with argument.

int main()
{
    float r, a;
    printf("Enter the radius of circle : ");
    scanf("%f", &r);
    a = area(r);
    printf("Area of circle = %f", a);
}
float area(float r)
{
    float pi = 3.14, A;
    A = pi * r * r;
    return A;
}*/
#include <stdio.h>
void area_of_circle();

int main()
{
    area_of_circle();
}
void area_of_circle()
{
    float pi = 3.14, A, r;
    printf("Enter the radius of circle : ");
    scanf("%f", &r);
    A = pi * r * r;
    printf("Area of circle = %f", A);
}