#include <stdio.h>
#include <conio.h>

int main()
{
    int n;
    printf("ENTER THE YEAR :-\n");
    scanf("%d", &n);

    if (n % 400 == 0)
    {
        printf("%d is a leap year.", n);
    }
    else if (n % 100 == 0)
    {
        printf("%d is not a leap year.", n);
    }
    else if (n % 4 == 0)
    {
        printf("%d is a leap year.", n);
    }
    else
    {
        printf("%d is not a leap year.", n);
    }
    getch();
    return 0;
}