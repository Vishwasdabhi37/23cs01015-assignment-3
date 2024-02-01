/*This is a program for checking whether the number is greater/less than or equal to zero*/
#include <stdio.h>
int main()
{
    int input;
    printf("Please enter the number : ");
    scanf("%d", &input);
    if (input > 0)
    {
        printf("The number you have entered is positive.\n");
    }
    else if (input < 0)
    {
        printf("The number you have entered is negative.\n");
    }
    else if (input == 0)
    {
        printf("The number you have entered is Zero.\n");
    }

    return 0;
}