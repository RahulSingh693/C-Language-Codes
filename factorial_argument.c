#include <stdio.h>
void factorial(int, int, int);

int main()
{
  int num, f = 1, i;
  printf("Enter the number: ");
  scanf("%d", &num);
  factorial(num, f, i);
  return 0;
}
void factorial(int num, int f, int i)
{
  for (i = 1; i <= num; i++)
  {
    f = f * i;
  }
  printf("Factorial of %d = %d", num, f);
}
