/*This is a program to check whether given number is kaprekar or not*/
#include <stdio.h>
#include <math.h>
int main()
{
    int num;
    int check = 0;
    printf("Enter the number : ");
    scanf("%d", &num);
    int num_sq = num * num;
    int temp = num_sq;
    int len = 0;
    while (temp != 0)
    {
        temp = temp / 10;
        len++;
    }
    int temp2 = len;
    len = (len / 2) + (len % 2);
    for (int i = 0; i <= temp2 / 2; i++)
    {
        check++;
        double multiple = (pow((double)10, (double)(len - i)));
        int firstnum = num_sq / multiple;
        int secnum = num_sq - multiple * firstnum;
        if (firstnum == 0 || secnum == 0)
        {
            continue;
        }

        if (firstnum + secnum == num)
        {
            printf("%d is a Kaprekar number\n", num);
            printf("check %d\n", check);
            return 0;
        }
    }
    for (int i = 1; i <= temp2 / 2; i++)
    {
        double multiple = (pow((double)10, (double)(len + i)));
        check++;
        int firstnum = num_sq / multiple;
        int secnum = num_sq - multiple * firstnum;
        if (firstnum == 0 || secnum == 0)
        {
            continue;
        }

        if (firstnum + secnum == num)
        {
            printf("%d is a Kaprekar number\n", num);
            printf("check %d\n", check);
            return 0;
        }
    }

    printf("%d is not a kaprekar number\n", num);
    printf("check %d\n", check);

    return 0;
}