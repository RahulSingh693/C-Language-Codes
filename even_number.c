#include <stdio.h>

int main()
{
    int n, r, e = 0, o = 0;
    printf("Enter the number :-\n");
    scanf("%d", &n);

    while (n != 0)
    {
        r = n % 10;
        if (r % 2 == 1)
        {
            o++;
        }
        else
        {
            e++;
        }
        n = n / 10;
    }
    printf("EVEN NUMBER OF DIGITS = %d\n", e);
    printf("ODD NUMBER OF DIGITS = %d\n", o);

    return 0;
}