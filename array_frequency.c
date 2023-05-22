#include <stdio.h>
#include <conio.h>

int main()
{
    int arr[10], i, j, num, freq = 0;

    printf("Enter Elements of array :\n");
    for (i = 0; i < 10; i++)
    {
        printf("Element: ");
        scanf("%d", &arr[i]);
    }
    printf("Enter Number to check frequency: ");
    scanf("%d", &num);
    for (j = 0; j < 10; j++)
    {
        if (arr[j] == num)
        {
            freq++;
        }
    }
    printf("Frequency of %d in this array = %d", num, freq);

    getch();
    return 0;
}