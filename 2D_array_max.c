#include <stdio.h>
#include <conio.h>

int main()
{
    int i, j, a[100][100], row, column;

    printf("Enter number of rows of 2D array: ");
    scanf("%d", &row);
    printf("Enter number of columns of 2D array: ");
    scanf("%d", &column);

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            printf("Enter data at a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    int max = a[0][0];

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            if (a[i][j] > max)
            {
                max = a[i][j];
            }
        }
    }
    printf("\n");
    printf("Maximum value of this 2D-array = %d", max);

    getch();
    return 0;
}