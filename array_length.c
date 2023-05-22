#include <stdio.h>
#include <conio.h>

void arraylength(int, int, int *);

void ext()
{
    printf("Exited...");
    return ;
}
int main()
{
    int i = 0, count = 1, arr[30];
    arraylength(i, count, arr);
    
    getch();
    return 0;
}
void arraylength(int i, int count, int arr[])
{
    int swich, num;
    printf("1. Press 1 to enter data.\n");
    printf("2. Press 2 to exit.\n");
    scanf("%d", &swich);

    switch (swich)
    {
    case 1:
        printf("Enter data of array: ");
        scanf("%d", &arr[i]);
        arraylength(i + 1, ++count, arr);

    case 2:
        printf("\nElements of arrays are : \n");
        for (i = 0; i < count-1; i++)
        {
            printf("%d  ", arr[i]);
        }
        printf("\nLength of array = %d\n", count-1);
        ext();
    }
}