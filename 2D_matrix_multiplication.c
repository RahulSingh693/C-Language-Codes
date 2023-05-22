#include <stdio.h>
#include <conio.h>

int main()
{
    int a[4][4], b[4][4], c[4][4], i, j, k, l,m;
    
    printf("Enter data in matrix a[4][4] :-\n\n");
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("Enter data at a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("\nEnter data in matrix b[4][4] :-\n\n");
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("Enter data at b[%d][%d]: ", i, j);
            scanf("%d", &b[i][j]);
        }
    }
    for(k=0;k<4;k++)
    {
        for(l=0;l<4;l++)
        {
            for(m=0;m<4;m++)
            {
               
            }
        }
    }
    getch();
    return 0;
}