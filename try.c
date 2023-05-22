#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str[] = "abdf", str1[] = "abdf";
    int i = 0, j = 0;

    if (strlen(str) != strlen(str1))
    {
        exit(1);
    }
    else
    {
        while (i != strlen(str))
        {
            if (str[i] != str1[i])
            {
                j = 1;
            }
            i++;
        }
    }
    if(j==1)
    {
        printf("not same");
    }
    else
    {
        printf("same");
    }
    return 0;
}