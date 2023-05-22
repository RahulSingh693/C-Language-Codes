#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    FILE *f_source, *f_destination;
    char text[100];

    char ch;
    f_source = fopen("mytext.txt", "r");
    f_destination = fopen("myfile.txt", "w");

    if (f_source == NULL)
    {
        printf("Source file couldn't be opened\n");
        exit(1);
    }

    if (f_destination == NULL)
    {
        printf("Destination file couldn't be opened\n");
        exit(2);
    }

    while (1)
    {
        ch = fgetc(f_source);
        if (ch == EOF)
        {
            break;
        }
        else
        {
            fputc(ch, f_destination);
        }
    }
    fclose(f_source);
    fclose(f_destination);
    getch();
    return 0;
}