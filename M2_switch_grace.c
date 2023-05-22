#include <stdio.h>
#include <conio.h>

int main()
{
    int class, grace, fail;

    printf("Enter the class you got: ");
    scanf("%d", &class);
    printf("Enter number of subjects you failed: ");
    scanf("%d", &fail);

    switch (class)
    {
    case 1:
        if (fail > 3)
            grace = 5;
        else
            grace = 0;
        break;

    case 2:
        if (fail > 2)
            grace = 4;
        else
            grace = 0;
        break;

    case 3:
        if (fail > 1)
            grace = 5;
        else
            grace = 0;
        break;

    default:
        printf("Please enter valid class!");
    }
    if (class == 1 || class == 2 || class == 3)
    {
        printf("You got %d grace marks per subject. ", grace);
    }
    getch();
    return 0;
}