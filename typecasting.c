#include <stdio.h>

int main()
{
    int i = 345;
    printf("int to float = %f\n", (float)i);
    printf("int to char = %c\n", (char)i);

    float f = 496.7565;
    printf("float to char = %c\n", (char)f);
    printf("float to int = %d\n", (int)f);

    char c = 'g';
    printf("char to int = %d\n", (int)c);
    printf("char to float = %f\n", (float)c);

    return 0;
}