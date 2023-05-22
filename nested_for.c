#include<stdio.h>
int main()
{
    int a,b,sum;
    for(a=1;a<=3;a++)
    {
        for(b=1;b<=2;b++)
        {
            sum=a+b;
            printf("a=%d b=%d a+b=%d\n",a,b,sum);
        }
    }
    return 0;
}