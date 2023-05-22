#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    FILE *f_source, *f_destination;
    int ch;
    f_source = fopen("Tu mera.mp3", "rb");
    f_destination = fopen("Copy.mp3", "wb");
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