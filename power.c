#include <stdio.h>
#include <conio.h>

int main()
{
    int n, power, i = 0, result = 1, j;
    for (j = 0; j < 100; j++)
    {
        printf("\nEnter the number:\n");
        scanf("%d", &n);
        printf("Enter the power:\n");
        scanf("%d", &power);

        while (i < power)
        {
            result = result * n;
            i++;
        }
        printf("Answer = %d", result);
    }
    getch();
    return 0;
}