#include <stdio.h>
#include <conio.h>
int factorial(int);

int main()
{
    int n, Factorial;
    printf("Program to calculte factorial of number.\n");
    printf("\nEnter number (positive): ");
    scanf("%d", &n);

    Factorial = factorial(n);
    printf("Factorial of %d = %d", n, Factorial);

    getch();
    return 0;
}
int factorial(int n)
{
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}
