#include<stdio.h>
int main()

{
    int i=1;
    do
    {
      int j=1;
      printf("%d X %d = %d\n",i,j,i*j);
      j++;
    
     while (j<=10);
     printf("table of %d",i);
     i++;
    }
    while(i<=10);
    return 0;
    

}