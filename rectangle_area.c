#include <stdio.h>
#include <conio.h>
int area_of_rectangle(int, int);
int multiply(int, int);

int main()
{
    int l, b, a;
    printf("Enter the length of rectangle : ");
    scanf("%d", &l);
    printf("Enter the breadth of rectangle : ");
    scanf("%d", &b);
    a = area_of_rectangle(l, b);
    printf("Hence, area of rectangle = %d sq.unit.", a);
    getch();
    return 0;
}
int area_of_rectangle(int l, int b)
{
    int a;
    printf("As area of rectangle = length X breadth:\n");
    a = multiply(l, b);
    return a;
}
int multiply(int l, int b)
{
    int a = 0, i;
    for (i = 0; i < b; i++)
    {
        a = a + l;
    }
    return a;
}