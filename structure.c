#include <stdio.h>
#include <conio.h>


struct details
{
    int reg;
    char name[20];
    float marks;
};

int main()
{
    struct details d;

    printf("Enter your name: ");
    gets(d.name);
    printf("Enter registration number: ");
    scanf("%d", &d.reg);
    printf("Enter your marks: ");
    scanf("%f", &d.marks);
    printf("\nInserted details:\n");
    printf("%d\n%s\n%.3f", d.reg, d.name, d.marks);
    
    getch();
    return 0;
}