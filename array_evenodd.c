#include <stdio.h>
#include <conio.h>

int main()
{
    int arr[10], i, odd=0;

    printf("Enter elements of array:\n");
    for (i = 0; i < 10; i++)
    {
        printf("Element: ");
        scanf("%d", &arr[i]);
    }

    for (int j = 0; j < 10; j++)
    {
        if (arr[j] % 2 != 0)
        {
            odd++;
        }
    }
    printf("Number of Odd numbers = %d",odd);
    getch();
    return 0;
}