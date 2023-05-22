#include <stdio.h>
#include <conio.h>
int printarray(int *, int, int);

int main()
{
    int arr[10];
    printf("program to print array elements using recursion.\n");

    for (int i = 0; i < 10; i++)
    {
        printf("Enter element of array at a[%d]: ", i);
        scanf("%d", &arr[i]);
    }
    printf("\n------: Elements of arrays :------\n");
    printarray(arr, 0, 10);
    getch();
    return 0;
}
int printarray(int arr[], int i, int size)
{
    if (i < size)
    {
        printf("Element of array at a[%d]= %d\n", i, arr[i]);
        printarray(arr, i + 1, size);
    }
    else
    {
        return 0;
    }
}
