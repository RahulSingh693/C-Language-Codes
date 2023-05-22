#include <stdio.h>

int main()
{
    int i=697;
    float f=354.45;
    char c='A';
    printf("Size of int : %d bytes\n", sizeof(int));
    printf("Size of short int : %d bytes\n", sizeof(short int));
    printf("Size of long int : %d bytes\n", sizeof(long int));
    printf("Size of signed int : %d bytes\n", sizeof(signed int));
    printf("Size of unsigned int : %d bytes\n", sizeof(unsigned int));

    printf("Size of float : %d bytes\n", sizeof(float));

    printf("Size of char : %d bytes\n", sizeof(char));
    printf("Size of signed char : %d bytes\n", sizeof(signed char));
    printf("Size of unsigned char : %d bytes\n", sizeof(unsigned char));
    
    printf("Size of double : %d bytes\n", sizeof(double));
    printf("Size of long double : %d bytes\n", sizeof(long double));

    return 0;
}