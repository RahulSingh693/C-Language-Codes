#include <stdio.h>
#include <conio.h>

int main()
{
    int i, j, n, m;
    char c;

    for (j = 1; j > 0; j++)
    {
        printf("\nEnter first number : ");
        scanf("%d", &n);
        printf("Enter 1 for sum.\n");
        printf("Enter 2 for subtraction.\n");
        printf("Enter 3 for multiplication.\n");
        printf("Enter 4 for division.\n");
        printf("Enter 5 for remainder.\n");
        printf("\nEnter choice :- ");
        scanf("%d", &i);
        printf("Enter second number : ");
        scanf("%d", &m);
        switch (i)
        {
        case 1:
            printf("Sum of two numbers = %d\n", n + m);
            break;
        case 2:
            printf("Subtraction of two numbers = %d\n", n - m);
            break;
        case 3:
            printf("Multiplication of two numbers = %d\n", n * m);
            break;
        case 4:
            printf("Division of two numbers = %d\n", n / m);
            break;
        case 5:
            printf("Remainder of two numbers = %d\n", n % m);
            break;
        default:
            printf("Please choose correct option");
        }

        printf("\nTo perform operation again. Press[y/n]: ");
        scanf(" %c", &c);
        if (c == 'y')
        {
            continue;
        }
        else
        {
            printf("Exit successfully!");
            break;
        }
    }

    getch();
    return 0;
}