#include <stdio.h>

int main()
{
    int n;
    printf("ENTER THE NUMBER :-\n");
    scanf("%d", &n);

    if (n % 5 == 0 && n % 7 == 0)
    {
        printf("%d is divisible by both 5 and 7.", n);
    }
    else if (n % 5 == 0)
    {
        printf("%d is divisible by 5 but not 7.", n);
    }
    else if (n % 7 == 0)
    {
        printf("%d is divisible by 7 but not 5.");
    }
    else if (n % 5 != 0 && n % 7 != 0)
    {
        printf("%d is not divisible by both 5 and 7", n);
    }
    else
    {
        printf("Error......");
    }
    return 0;
}