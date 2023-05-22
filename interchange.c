#include <stdio.h>
#include<conio.h>

int main()
{
    int a, b, c;

    printf("Enter a number A : ");
    scanf("%d", &a);
    printf("Enter another number B : ");
    scanf("%d", &b);
    printf("After swaping..................\n");
    a=a+b;
    b=a-b;
    a=a-b;
    printf("Value in A = %d\n",a);
    printf("Value of B = %d",b);

    getch();
    return 0;
}
