#include <stdio.h>
#include <conio.h>

int main()
{
  int d, m, y;
  printf("Enter date (in number): ");
  scanf("%d", &d);
  if (d > 0 && d < 32)
  {
    printf("Enter month (in number): ");
    scanf("%d", &m);
    if (m > 0 && m < 13)
    {
      printf("Enter year (in number): ");
      scanf("%d", &y);
      if (y > 1000 && y < 9999)
      {
        printf("Now, Enter the second dd-mm-yyyy....");
      }
      else
      {
        printf("Wrong approach....");
        return 0;
      }
    }
    else
    {
      printf("Invalid month....Retry...");
    }
  }
  else
  {
    printf("Invalid date....Retry...");
  }

  int d2, m2, y2;
  printf("Enter date (in number): ");
  scanf("%d", &d2);
  if (d > 0 && d < 32)
  {
    printf("Enter month (in number): ");
    scanf("%d", &m2);
    if (m > 0 && m < 13)
    {
      printf("Enter year (in number): ");
      scanf("%d", &y2);
      if (y > 1000 && y < 9999)
      {
        printf("Hence the difference between years :-\n");
      }
      else
      {
        printf("Wrong approach....");
        return 0;
      }
    }
    else
    {
      printf("Invalid month....Retry...");
    }
  }
  else
  {
    printf("Invalid date....Retry...");
  }

  //difference operation......................
  if(y<y2)
  {
    do this
  }

  getch();
  return 0;
}