#include<stdio.h>
#include<math.h>
int main()
{
    float p,r,s ;
    int t ;
    printf("write principal amount:\n");
    scanf("%f",&p);
    printf("write rate of interest\n");
    scanf("%f",&r);
    printf("write time of interest\n");
    scanf("%d",&t);
    s = p*r*t/100;
    printf("%f is the simple interest of %f amount\n",s,p);
    return 0;



}