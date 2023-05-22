#include <stdio.h>
#include <conio.h>
#include<string.h>

int main()
{
    FILE *fp;
    char text[100];

    fp = fopen("mytext.txt", "a");

    if (fp == NULL)
    {
        printf("Error! Can't open file");
        return 0;
    }
    else
    {
        printf("Enter the text to append in this file: ");
        gets(text);
        for (int i = 0; i < strlen(text); i++)
        {
            fputc(text[i], fp);
        }
    }
    fclose(fp);
    getch();
    return 0;
}