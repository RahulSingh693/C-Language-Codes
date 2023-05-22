#include <stdio.h>
#include <conio.h>

int main()
{
    int f1 = 0, f2 = 2, size, f3, i;

    printf("Enter the size of fabonacci series: ");
    scanf("%d", &size);

    printf("The fabonacci series of %d numbers :\n", size);
    printf("%d, %d, ", f1, f2);

    for (i = 3; i <= size; i++)
    {
        f3 = f1 + f2;
        printf("%d, ", f3);
        f1 = f2;
        f2 = f3;
    }
    printf("......");

    getch();
    return 0;
}
