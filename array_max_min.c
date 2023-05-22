#include <stdio.h>
#include <conio.h>

int main()
{
    int a[10], i, n;

    for (i = 0; i < 10; i++)
    {
        printf("Enter element at array a[%d] = ", i);
        scanf("%d", &a[i]);
    }
    n = a[1];
    for (i = 0; i < 10; i++)
    {
        a[i] < n;
        if (a[i] < n)
        {
            n = a[i];
        }
        continue;
    }
    printf("Minimum value of this array is = %d\n", n);
    n = a[0];
    for (i = 0; i < 10; i++)
    {
        a[i] > n;
        if (a[i] > n)
        {
            n = a[i];
        }
    }
    printf("Maximum value of this array is = %d", n);

    getch();
    return 0;
}