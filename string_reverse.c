#include <stdio.h>
#include <conio.h>

int main()
{
    int i;
    char name[11] = "Rahulsingh";

    for(i=10;i>=0;i--)
    {
        printf("%c",name[i]);
    }
    getch();
    return 0;
}