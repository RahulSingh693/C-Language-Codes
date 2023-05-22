#include <stdio.h>
#include <math.h>
#include<conio.h>

int main()
{
    float m, n, sum, subtract, multiply, rem;

    printf("Enter two numbers : \n");
    scanf("%f %f", &m, &n);

    sum = m + n;
    printf("Sum of two numbers is = %f\n", sum);

    subtract = m - n;
    printf("Difference of two numbers is = %f\n", subtract);

    multiply = m * n;
    printf("Multiplication of two numbers is = %f\n", multiply);
    printf("Division of two numbers :----------\n");

    printf("Quotient of two numbers = %f\n", m / n);
    rem = remainder(m, n);
    printf("Remainder of two numbers = %f\n", rem);
    getch();
    return 0;
}