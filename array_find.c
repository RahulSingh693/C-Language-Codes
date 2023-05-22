#include <stdio.h>
#include <conio.h>

int main()
{
    int a[] = {12, 23, 34, 67, 49, 25}, i, j, n, r = 0;

    for (i = 0; i < 6; i++)
    {
        printf("%d\t", a[i]);
    }
    printf("\nEnter element to replace: ");
    scanf("%d", &n);

    for (i = 0; i < 6; i++)
    {
        if (a[i] == n)
        {
            r = 1;
            printf("Yes...Element found at a[%d]\n", i);
            printf("Enter new element to replace at a[%d]\n", i);
            scanf("%d", &j);
            a[i] = j;
            break;
        }
    }
    if (r == 0)
    {
        printf("Error....cant found searched element.\n");
    }
    else if (r == 1)
    {
        printf("Array after replacing =\n");
        for (i = 0; i < 6; i++)
        {
            printf("%d\t", a[i]);
        }
    }

    getch();
    return 0;
}
