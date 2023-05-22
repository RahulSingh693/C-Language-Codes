#include <stdio.h>
void character();

int main()
{
    int i;
    printf("----***ASCII values of small alphabet***----\n");
    for (i = 'a'; i <= 'z'; i++)
    {
        printf("ASCII value of %c = %d\n",i,i);
    }
    character();
    return 0;
}
void character() 
{
    char c;
    printf("----***ASCII values of capital alphabet***----\n");
    for(c='A';c<='Z';c++)
    {
        printf("ASCII value of %c = %d\n",c,c);
    }
}