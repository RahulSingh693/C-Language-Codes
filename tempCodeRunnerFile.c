#include <stdio.h>

int main()
{
    /*int a = 3;
    int *b; // declaration of a pointer varaible
    b = &a; // storing the address of a in b

    printf("\nAddress of a = %u", &a);
    printf("\nAddress of a = %u", b);
    printf("\nAddress of b = %u", &b);
    printf("\nValue of b = %u", b);
    printf("\nValue of a = %d", a);
    printf("\nValue of a = %d", *(&a));
    printf("\nValue of a= %d", *b);

    int i = 9;
    int *j;
    j = &i;
    *j = 5;
    printf("\nassignment value of i through j = %d", i);*/

    int i = 3, *j, **k;
    j = &i;
    k = &j;
    printf("\nAddress of i = %u", &i);
    printf("\nAddress of i = %u", j);
    printf("\nAddress of i = %u", *k);
    printf("\nAddress of j = %u", &j);
    printf("\nAddress of j = %u", k);
    printf("\nAddress of k = %u", &k);
    printf("\nValue of j = %u", j);
    printf("\nValue of k = %u", k);
    printf("\nValue of i = %d", i);
    printf("\nValue of i = %d", *(&i));
    printf("\nValue of i = %d", *j);
    printf("\nValue of i = %d", **k);

    return 0;
}