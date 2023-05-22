#include <stdio.h>

int main()
{
    float a, b, c;

    printf("Enter first side of the triangle :\n");
    scanf("%f", &a);
    printf("Enter second side of the triangle :\n");
    scanf("%f", &b);
    printf("Enter third side of the triangle :\n");
    scanf("%f", &c);

    if (a + b > c && b + c > a && c + a > b)
    {
        printf("It is a valid triangle.");
    }
    else
    {
        printf("It is not a valid triangle.");
    }
    return 0;
}