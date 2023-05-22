#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
    char check[50];

    printf("Enter the word/sentence:\n");
    gets(check);

    int i = 0, k = 0;
    int j = strlen(check) - 1;

    while (j > 1)
    {
        if (check[i++] != check[j--])
        {
            k = 1;
            break;
        }
    }
    if (k == 1)
    {
        printf("This word/sentence is not palindrome.");
    }
    else
    {
        printf("This word/sentence is palindrome.");
    }
    
    getch();
    return 0;
}