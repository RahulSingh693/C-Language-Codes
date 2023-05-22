#include <stdio.h>
#include <conio.h>

int main()
{
    int a[10], i, n, f = 0;

    for (i = 0; i < 10; i++)
    {
        printf("Enter elements of array at a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    printf("\nEnter element to search in this array : ");
    scanf("%d", &n);

    for (i = 0; i < 10; i++)
    {
        if (a[i] == n)
        {
            f = 1;
            break;
        }
    }

    if (f == 1)
    {
        printf("\nFound......The element you searched is at a[%d] position. ", i);
    }
    else
    {
        printf("Error....Can't find the element you have entered.\n");
    }

    getch();
    return 0;
}
