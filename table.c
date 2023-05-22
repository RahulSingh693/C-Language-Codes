#include <stdio.h>

int main()
{
    int i, j;

    printf("Enter number to print table : ");
    scanf("%d", &i);

    printf("--------: Table of %d :----------\n", i);
    for (j = 1; j <= 10; j++)
    {
        printf("%d X %d = %d\n", i, j, i * j);
    }
    return 0;
}