/*This is a student result managment program which gives the score and the grade of the student*/
#include <stdio.h>
int main()
{
    int m, n, k;
    while (1)
    {
        printf("Enter the value of marks obtained :\n");
        scanf("%d", &m);
        if ((m >= 0 && m <= 100))
        {
            break;
        }

        printf("Please enter a correct value of marks.\n");
    }
    printf("Enter the value of no of classes conducted :\n");
    scanf("%d", &k);
    while (1)
    {
        printf("Enter the no of classes attended :\n");
        scanf("%d", &n);
        if ((n <= k))
        {
            break;
        }

        printf("Please enter a correct value of no of classes attended.\n");
    }

    float t, w;
    w = (float)n / (float)k;
    t = (float)m * w;
    printf("Final score = %.0f\n", t);
    if (t >= 90)
    {
        printf("Grade is = EX\n");
    }
    else if (t >= 80 && t < 89)
    {
        printf("Grade is = A\n");
    }
    else if (t >= 70 && t < 79)
    {
        printf("Grade is = B\n");
    }
    else if (t >= 60 && t < 69)
    {
        printf("Grade is = C\n");
    }
    else if (t >= 50 && t < 59)
    {
        printf("Grade is = D\n");
    }
    else if (t >= 40 && t < 49)
    {
        printf("Grade is = P\n");
    }
    else if (t < 40)
    {
        printf("Grade is = F\n");
    }

    return 0;
}