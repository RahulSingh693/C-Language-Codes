#include<stdio.h>

int main()
{
    char str[10];
    int a, i, d, s;
    i = a = d = s = 0;

    printf("Enter string: \n");
    gets(str);

    while (str[i] != '\0')
    {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
        {
            a++;
        }
        else if (str[i] >= '0' && str[i] <= '9')
        {
            d++;
        }
        else
        {
            s++;
        }
        i++;
    }
    printf("No. of special character = %d", s);
    return 0;
}