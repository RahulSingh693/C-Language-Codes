#include <stdio.h>
#include <conio.h>
int stringrev(char *, int);

int main()
{
    int i;
    char name[100];

    printf("Enter your name: ");
    gets(name);

    printf("\nPrinted Name using recursion:\n ");
    stringrev(name, 0);

    getch();
    return 0;
}
int stringrev(char name[], int i)
{
    if (name[i] != '\0')
    {
        printf("%c", name[i]);
        stringrev(name, i+1);
    }
    else
    {
        return 0;
    }
}
