#include <stdio.h>
#include <conio.h>
int stringrev(char *, int, int);

int main()
{
    int i;
    char name[100];
    char *ptr = name;
    printf("Enter your name: ");
    gets(name);
    for (i = 0; *ptr != '\0'; i++)
    {
        *ptr++;
    }

    printf("\nName after reverse: ");
    stringrev(name, 0, i);

    getch();
    return 0;
}
int stringrev(char name[], int i, int size)
{
    if (size >= i)
    {
        printf("%c", name[size]);
        stringrev(name, i, size - 1);
    }
    else
    {
        return 0;
    }
}
