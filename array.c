#include <stdio.h>
#include <conio.h>

int main()
{
    int a[8] = {12, 34, 45, 23, 12, 45, 65, 98}, i;

    for (i = 0; i < 8; i++)
    {
        printf("Value at array a[%d] = %d\n", i, a[i]);
        printf("Address of array a[%d] = %u\n", i, &a[i]);
    }
    getch();
    return 0;
}