#include <stdio.h>
void sum(int, int);
void subtraction(int, int);
void multiplication(int, int);
void division(int, int);

int main()
{
    int x, y;
    printf("Enter two numbers:\n");
    scanf("%d %d", &x, &y);
    printf("Addition of two numbers:-\n");
    sum(x, y);
    printf("Subtraction of two numbers:-\n");
    subtraction(x, y);
    printf("Multiplication of two numbers:-\n");
    multiplication(x, y);
    printf("Division of two numbers:-\n");
    division(x, y);
    return 0;
}
void sum(int a, int b)
{
    int sum;
    sum = a + b;
    printf("Sum of two numbers is = %d\n", sum);
}
void subtraction(int c, int d)
{
    int sub;
    sub = c - d;
    printf("Subtraction of two numbers is = %d\n", sub);
}
void multiplication(int e, int f)
{
    int mul;
    mul = e * f;
    printf("Multiplication of two numbers is = %d\n", mul);
}
void division(int g, int h)
{
    int div, rem;
    div = g / h;
    rem = g % h;
    printf("Quotient of two numbers is = %d\n", div);
    printf("And remainder of two numbers is = %d\n", rem);
}