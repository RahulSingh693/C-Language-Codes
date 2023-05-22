#include <stdio.h>
#include <conio.h>

int main()
{
    int number;
    printf("Enter a number : ");
    scanf("%d", &number);

    int *i, **j;
    i = &number;
    j = &i;
    int ***k = &j;

    printf("Value You entered = %d", ***k);
    printf("\nAddress of number = %u", **k);

    getch();
    return 0;
}
