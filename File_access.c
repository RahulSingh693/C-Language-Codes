#include <stdio.h>
#include <conio.h>

int main()
{
    FILE *fp;
    char ch;
    fp = fopen("Newfile.txt", "r");

    if (fp == NULL)
    {
        printf("Error! Can't open file");
        return 0;
    }
    else
    {
        while (1)
        {
            ch = fgetc(fp);

            if (ch == EOF)
            {
                break;
            }
            else
            {
                printf("%c", ch);
            }
        }
    }
    fclose(fp);

    getch();
    return 0;
}