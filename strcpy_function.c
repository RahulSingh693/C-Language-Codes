#include <stdio.h>
#include <conio.h>
void mystrcpy(char *, char *);

int main()
{
    char name[100];
    char copy[100];

    printf("Enter your name: ");
    gets(name);

    mystrcpy(&name[0], &copy[0]);
    printf("\n");
    printf("Copied string = %s", copy);

    getch();
    return 0;
}
void mystrcpy(char *ptr, char *cpy)
{
    int i;

    for (i = 0; *ptr != '\0'; i++)
    {
        *(cpy) = *(ptr);
        cpy++;
        ptr++;
    }
}