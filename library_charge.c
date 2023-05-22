#include <stdio.h>
int main()
{
    int n;
    printf("Enter the days from when the book you have brought from library: ");
    scanf("%d", &n);
    if (n <= 5)
        printf("You have to pay 50paise fine.");
    if (n <= 10 && n >= 6)
        printf("You have to pay 1rupee fine.");
    if (n > 10 && n <= 30)
        printf("You have to pay 5rupees fine.");
    if (n > 30)
        printf("Your membership is cancelled.");

    return 0;
}