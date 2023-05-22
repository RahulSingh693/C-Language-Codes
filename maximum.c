#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter first number :\n");
    scanf("%d", &a);
    printf("Enter second number :\n");
    scanf("%d", &b);
    printf("Enter third number:\n");
    scanf("%d", &c);

    if (a > b)
    {
        if (a > c)
        {
            printf("%d is the maximum number.", a);
        }
        else
        {
            printf("%d is the maximum number.", c);
        }
    }
    else
    {
        if (b > a)
        {
            if (b > c)
            {
                printf("%d is the maximum number.", b);
            }
            else
            {
                printf("%d is the maximum number.", c);
            }
        }
    }
    return 0;
}