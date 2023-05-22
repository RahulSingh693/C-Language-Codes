#include <stdio.h>
void factorial();

int main()
{
    printf("------:Factorial of numbers :------\n");
    factorial();
    return 0;
}
void factorial()
{
    int num, i, f = 1;
    printf("Enter the number : ");
    scanf("%d", &num);
    for (i = 1; i <= num; i++)
    {
        f = f * i;
    }
    printf("Factorial of %d = %d", num, f);
}