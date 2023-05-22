#include <stdio.h>
#include <conio.h>

int main()
{

    struct book
    {
        char name[10];
        float price;
        int pages;
    };
    struct book b1, b2, b3;

    printf("Enter name of book 1: ");
    scanf("%s", b1.name);
    printf("Enter price of book 1: ");
    scanf("%f",&b1.price);
    printf("Enter pages of book 1: ");
    scanf("%d",&b1.pages);
    printf("Enter name of book 2: ");
    scanf("%s", b2.name);
    printf("Enter price of book 2: ");
    scanf("%f",&b2.price);
    printf("Enter pages of book 2: ");
    scanf("%d",&b2.pages);
    printf("Enter name of book 3: ");
    scanf("%s", b3.name);
    printf("Enter price of book 3: ");
    scanf("%f",&b3.price);
    printf("Enter pages of book 3: ");
    scanf("%d",&b3.pages);
    
    printf("\nDetails of books are: \n");
    printf("First  book: %s\t%f\t%d",b1.name,b1.price,b1.pages);
    printf("\nSecond book: %s\t%f\t%d",b2.name,b2.price,b2.pages);
    printf("\nThird  book: %s\t%f\t%d",b3.name,b3.price,b3.pages);

    getch();
    return 0;
}