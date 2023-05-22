#include <stdio.h>

int main()
{
    int num, n;
    printf("Enter the number (+ve or -ve) : ");
    scanf("%d", &num);
    n = -1 * num;
    if (num < 0)
    {
        printf("Absolute value = %d", n);
    }
    else
    {
        printf("Absolute value = %d", num);
    }
}