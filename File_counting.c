#include <stdio.h>
#include <conio.h>

int main()
{
    FILE *fp;
    char ch;
    int space = 0, ent = 0, charac = 0;
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
                
                charac++;

                if (ch == ';')
                {
                    ent++;
                }
            }
        }
        printf("\nNumber of characters = %d", charac);
        printf("\nNumber of semicolons: %d",ent);
    }
    fclose(fp);

    getch();
    return 0;
}