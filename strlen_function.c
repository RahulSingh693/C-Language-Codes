#include <stdio.h>
#include <conio.h>
void mystrlen(char *);

int main()
{
    char name[100];

    printf("Enter your name: ");
    gets(name);

    mystrlen(&name[0]);

    getch();
    return 0;
}
void mystrlen(char *ptr)
{
    int i;
    for (i = 0; *ptr != '\0'; i++)
    {
        *ptr++;
    }
    printf("\n");
    printf("\nLength of string = %d", i);
    printf("\nLength of string(with null) = %d",i+1);
}
