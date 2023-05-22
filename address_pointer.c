#include<stdio.h>

int main()
{
    int a;
    float b;
    char d;
    int *j;
    float*k;
    char*l;
    
    printf("Enter the value of c : ");
    scanf("%c",&d);
    printf("Enter the value of a : ");
    scanf("%d",&a);
    printf("Enter the value of b : ");
    scanf("%f",&b);
    

    j=&a;
    k=&b;
    l=&d;

    printf("Address of a = %u\n",j);
    printf("Address of b = %u\n",k);
    printf("Address of c = %u\n",l);

    printf("Value of a = %d\n",*j);
    printf("Value of b = %f\n",*k);
    printf("Value of c = %c\n",*l);



}