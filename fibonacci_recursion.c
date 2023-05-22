#include <stdio.h>
#include <conio.h>
int series(int);

int main()
{
    int size, f;
    printf("Program to find fibonacci series of number.\n");
    printf("\nEnter the size of fibonacci series: ");
    scanf("%d", &size);
    printf("Fibonacci series of size %d = ", size);
    printf("%d, %d, ", 0, 1);

    f = series(size - 2);
    printf("......");

    getch();
    return 0;
}
int series(int size)
{
    static int m = 0, n = 1, num;

    if (size > 0)
    {
        num = m + n;
        m = n;
        n = num;
        printf("%d, ", num);
        series(size - 1);
    }
}
