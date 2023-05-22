#include <stdio.h>

int main()
{
    int digit, num, sum = 0;

    printf("Enter a five digit number : ");
    scanf("%d", &num);

    while (num != 0)
    {
        digit = num % 10;
        sum = sum + digit;
        num = num / 10;
    }
    printf("Sum of digits of number = %d", sum);
    return 0;
}