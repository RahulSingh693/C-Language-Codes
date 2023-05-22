#include <stdio.h>
#include <conio.h>

int main()
{
    int a;
    float b;
    char d;

    printf("Enter a (char) value : ");
    scanf("%c", &d);
    printf("Enter a (int) value : ");
    scanf("%d", &a);
    printf("Enter a (float) value : ");
    scanf("%f", &b);

    printf("(int) value = %d\n", *(&a));
    printf("(float) value = %f\n", *(&b));
    printf("(char) value = %c", *(&d));
    
    getch();
    return 0;
}