#include <stdio.h>
#include <conio.h>

void magicsquare(int, int[][30]);

int main()
{
    int size;
    int a[30][30];

    printf("Enter the size of magic square: ");
    scanf("%d", &size);
    if (size % 2 == 0)
    {
        printf("Error! Enter any odd number to create magic square.\n");
    }
    else
    {
        printf("\n----------MAGIC SQUARE----------\n\n");
        magicsquare(size, a);
    }
    getch();
    return 0;
}
void magicsquare(int size, int a[][30])
{
    int sqr = size * size;
    int i = 0, j = size / 2, k;

    for (k = 1; k <= sqr; k++)
    {
        a[i][j] = k;
        i--;
        j++;

        if (k % size == 0) //size-1 times true(below number)
        {
            i += 2;
            --j;
        }
        else
        {
            if (j == size)
            {
                j -= size;
            }
            else if (i < 0)
            {
                i += size;
            }
        }
    }

    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
        printf("\n");
        printf("\n");
    }
}
