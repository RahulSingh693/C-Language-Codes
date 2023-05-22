#include <stdio.h>
#include <conio.h>

int main()
{
    struct name
    {
        int a;
        float b;
    };
    printf("%d",sizeof( struct name));
    
    getch();
    return 0;
}