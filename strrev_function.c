#include <stdio.h>
#include <conio.h>
void reverse(char *, int);

int main()
{
    int len;
    char name[100];
    char *p = name;
    printf("Enter your name: ");
    gets(name);
    for (len = 0; *p != '\0'; len++)
    {
        *p++;
    }
    reverse(&name[len], len);

    getch();
    return 0;
}
void reverse(char *ptr, int n)
{
    int i;
    printf("Reverse of name: ");
    for (i = n; i >= '\0'; i--)
    {
        printf("%c", *(ptr));
        ptr--;
    }
}
