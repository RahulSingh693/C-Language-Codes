#include <stdio.h>
void swap(int *, int *);

int main()
{
    int i, j;
    printf("Enter number in i = ");
    scanf("%d", &i);
    printf("Enter number in j = ");
    scanf("%d", &j);
    swap(&i, &j);
    printf("Number in i = %d\n", i);
    printf("Number in j = %d", j);
}
void swap(int *i, int *j)
{
    int swap;
    swap = *i;
    *i = *j;
    *j = swap;
    printf("-------:After swaping:------\n");
}