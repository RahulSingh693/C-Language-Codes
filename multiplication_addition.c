#include <stdio.h>

int main()
{
    int m, n, i = 0, add = 0;

    printf("Enter first number to multiply : ");
    scanf("%d", &m);
    printf("Enter second number to multiply : ");
    scanf("%d", &n);
    while (i < n)
    {
        add = add + m;
        i++;
    }
    printf("Multiplication of two numbers = %d", add);
    return 0;
}