#include <stdio.h>
#include <conio.h>

int main()
{
    char copy[] = "Hello Rahul";
    char copied[30];
    int i;

    for (i = 0; i < sizeof(copy); i++)
    {
        copied[i] = copy[i];
    }
    printf("Copied string = %s", copied);
    
    getch();
    return 0;
}