#include <stdio.h>

int main()
{
    int i;
    printf("The numbers between 0-100 divisible by 7 :\n");

    for (i = 1; i <= 100; i++)
    {
        if (i % 7 == 0)
        {
            printf("%d, ");
        }
    }
    return 0;
}
