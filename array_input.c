#include <stdio.h>

int main()
{
    int n, a[10], i;

    printf("******Here is arraay of size 10******\n");

    for (i = 0; i < 10; i++)
    {
        printf("Enter the element at array a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    printf("\nAFTER ENTERING ELEMENTS IN ARRAY........\n");

    for (i = 0; i < 10; i++)
    {
        printf("Element at array a[%d] = %d\n", i, a[i]);
    }
    printf("******Here is the even and odd classification******\n");
    for (i = 0; i < 10; i++)
    {
        if (a[i] % 2 == 0)
        {
            printf("Element at array a[%d] = %d is Even number.\n", i, a[i]);
        }
        else
        {
            printf("Element at array a[%d] = %d is Odd number.\n", i, a[i]);
        }
    }
    return 0;
}