/*This is a program to find out the fines of returning a book  late for a library*/
#include <stdio.h>
int main()
{
    int no_of_days;
    printf("Enter the number of days\n");
    scanf("%d", &no_of_days);
    if (no_of_days <= 5)
    {
        printf("The fine is 1 rupee.\n");
    }
    else if (no_of_days <= 10)
    {
        printf("The fine is 2 rupees.\n");
    }
    else if (no_of_days <= 30)
    {
        printf("The fine is 5 rupees.\n");
    }
    else if (no_of_days > 30)
    {
        printf("Your membership is canceled.\n");
    }

    return 0;
}