#include<stdio.h>

int main()
{
    char name[30];
    // printf("Enter your name : ");
    // scanf("%s",name);
    // printf("Your name : %s",name);
    printf("Using gets, Enter name : ");
    gets(name);
    printf("Your name : %s",name);
}