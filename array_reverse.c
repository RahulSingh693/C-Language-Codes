#include <stdio.h>
#include <conio.h>

int main()
{
    int i, n;

    printf("Enter size of array : ");
    scanf("%d", &n);

    int a[n];
    for (i = 0; i < n; i++)
    {
        printf("Enter the element at array a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    printf("Array elements before reverse :--------\n");
    for (i = 0; i < n; i++)
    {
        printf("[%d]\t", a[i]);
    }

    printf("\nArray elements after reverse :---------\n");
    for (i = (n - 1); i >= 0; i--)
    {
        printf("[%d]\t", a[i]);
    }
    getch();
    return 0;
}