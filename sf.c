#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str1[] = "hello";
    char str2[] = "hello";
    int i, ok;
    if(strlen(str1) != strlen(str2))
    {
        exit(1);
    }
    while(i<strlen(str1))
    {
        if(str1[i] != str2[i])
        {
            ok=1;
        }
        i++;
    }
    if(ok==1)
    {
        printf("Both string are same");
    }
    else
    {
        printf("Both are not same");
    }
    getch();
    return 0;
}