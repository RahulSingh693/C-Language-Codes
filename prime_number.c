#include <stdio.h>
#include <conio.h>
int main()
{
    int n, i, r=0;
    printf("Enter the number to check :\n");
    scanf("%d", &n);

    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            r = 1;
            break;
        }
    }
    if (r == 1)
        printf("%d is not a prime number.", n);
    else
        printf("%d is a prime number.", n);
    getch();
    return 0;
}