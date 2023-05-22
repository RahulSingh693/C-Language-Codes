#include <stdio.h>
#include <conio.h>
int arraysum(int *, int, int);

int main()
{
    int arr[10];
    printf("Program to find array sum using recursion.\n");
    for (int i = 0; i < 10; i++)
    {
        printf("Enter element of array at a[%d]: ", i);
        scanf("%d", &arr[i]);
    }
    int sum = arraysum(arr, 0, 10);
    printf("\nHence, Sum of array = %d", sum);

    getch();
    return 0;
}
int arraysum(int arr[], int i, int size)
{
    if (i >= size)
    {
        return 0;
    }
    else
    {
        return arr[i] + arraysum(arr, i + 1, size);
    }
}