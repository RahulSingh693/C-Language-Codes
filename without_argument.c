#include <stdio.h>
void sum();
void division();
void subtraction();
void multiplication();
int main()
{
    printf("Lets start with sum\n");
    sum();
    printf("\ndivision operation");
    division();
    printf("\nsubtraction operation");
    subtraction();
    printf("\nmultiplication operation");
    multiplication();
    
    return 0;
}
void sum()
{
    int sum, a, b;
    printf("Enter two numbers\n");
    scanf("%d %d", &a, &b);
    sum = a + b;
    printf("Sum of %d and %d is %d", a, b, sum);
}
void division()
{
    int div, x, y, rem;
    printf("\nEnter two numbers:\n");
    scanf("%d %d", &x, &y);
    div = x / y;
    rem = x % y;
    printf("quotient of %d and %d is %d", x, y, div);
    printf("\nAnd remainder is %d", rem);
}
void subtraction()
{
    int sub, z, c;
    printf("\nEnter large number then small number\n");
    scanf("%d %d", &z, &c);
    sub = z - c;
    printf("subtraction of %d and %d is %d", z, c, sub);
}
void multiplication()
{
    int w, e, mul;
    printf("\nEnter two numbers\n");
    scanf("%d %d", &w, &e);
    mul = w * e;
    printf("multiplication of %d and %d is %d", w, e, mul);
}