#include <stdio.h>
#include <conio.h>

int main()
{
    int arr[10], brr[10], i, j, k;

    printf("Enter Elements of first array :\n");
    for (i = 0; i < 10; i++)
    {
        printf("Element: ");
        scanf("%d", &arr[i]);
    }
    printf("Enter Elements of second array :\n");
    for (j = 0; j < 10; j++)
    {
        printf("Element: ");
        scanf("%d", &brr[j]);
    }
    printf("Sum of corresponding elements of array :\n");
    for (k = 0; k < 10; k++)
    {
        printf("\narr[%d] + brr[%d] = %d", k, k, arr[k] + brr[k]);
    }
    getch();
    return 0;
}