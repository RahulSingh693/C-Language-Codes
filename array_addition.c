#include <stdio.h>
#include <conio.h>

int main()
{
    int a[10], n, i;

    for (i = 0; i < 10; i++)
    {
        printf("Enter element of array at a[%d] = ", i);
        scanf("%d", &a[i]);
    }
    n = a[0];
    for (i = 1; i < 10; i++)
    {
        n = n + a[i];
    }
    printf("Sum of elements of array = %d", n);

    getch();
    return 0;
}