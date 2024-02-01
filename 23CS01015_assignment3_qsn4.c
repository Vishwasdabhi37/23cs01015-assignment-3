/*This is a program to check whether given 3 points lie on a straight line or not*/
#include <stdio.h>
int main()
{
    int x1, y1, x2, y2, x3, y3;
    printf("Enter the coordinates of the point 1 : ");
    scanf("%d %d", &x1, &y1);
    printf("Enter the coordinates of the point 2 : ");
    scanf("%d %d", &x2, &y2);
    printf("Enter the coordinates of the point 3 : ");
    scanf("%d %d", &x3, &y3);
    if ((x2 - x1) * (y2 - y3) == (x2 - x3) * (y2 - y1))
    {
        printf("Given points lie on a straight line\n");
    }
    else
        printf("Given points do not lie on a straight line");

    return 0;
}