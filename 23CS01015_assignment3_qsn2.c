/*This is a program for checking the greatest number among three given numbers with the use of if/else condition statements*/
#include <stdio.h>
int main()
{
    int num1, num2, num3;
    printf("Enter number 1 : ");
    scanf("%d", &num1);
    printf("Enter number 2 : ");
    scanf("%d", &num2);
    printf("Enter number 3 : ");
    scanf("%d", &num3);
    int max = num1;
    if (max < num2)
    {
        max = num2;
    }
    if (max < num3)
    {
        max = num3;
    }
    printf("The largest integer among three integers is %d.", max);

    return 0;
}