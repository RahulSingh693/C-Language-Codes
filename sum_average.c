#include <stdio.h>
#include <conio.h>

int main()
{
    int a, b, c, d, e;

    printf("Enter five numbers :-\n");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

    printf("Sum = %d\n", a + b + c + d + e);
    printf("Average = %d", (a + b + c + d + e) / 5);

    getch();
    return 0;
}