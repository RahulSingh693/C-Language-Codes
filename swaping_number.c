#include <stdio.h>
#include <conio.h>
void swap(int *, int *);

int main()
{
    int A, B;
    printf("ENTER VALUE OF A = ");
    scanf("%d", &A);
    printf("ENTER VALUE OF B = ");
    scanf("%d", &B);

    swap(&A, &B);
    printf("AFTER SWAPING...........\n");
    printf("VALUE OF A = %d\n", A);
    printf("VALUE OF B = %d", B);

    getch();
    return 0;
}
void swap(int *A, int *B)
{
    int C;
    C = *A;
    *A = *B;
    *B = C;
}
