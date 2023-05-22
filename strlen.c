#include <stdio.h>
#include <conio.h>

int main()
{
    char name[] = "Hello Rahul!";
    char *p = name;
    int len;

    for (len = 0; *p != '\0'; len++)
    {
        *p++;
    }
    printf("Length of string = %d",len);

    getch();
    return 0;
}