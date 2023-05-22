#include <stdio.h>
#include <conio.h>
int stringlen(char *, int);

int main()
{
    char name[30];

    printf("Enter your name: ");
    gets(name);

    stringlen(name, 1);

    getch();
    return 0;
}
int stringlen(char name[], int i)
{
    if (name[i] != '\0')
    {
        stringlen(name, i + 1);
    }
    else
    {
        printf("Length of string = %d", i);
    }
}
