/*this is a program to check whether given 3 sides are sides of a triangle or not*/
#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter the sides of the Triangle : ");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    if (a + b >= c && b + c >= a && a + c >= b)
    {
        printf("Entered integers are sides of a triangle.\n");
    }
    else printf("Entered integers are not sides of a triangle.\n");

    return 0;
}