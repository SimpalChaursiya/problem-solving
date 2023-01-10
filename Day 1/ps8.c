#include<stdio.h>
void main()
{
    int x,y;
    printf("Enter the value of x and y:");
    scanf("%d%d",&x,&y);
    if(x>0&&y>0)
        printf("First Quadrant");
    else if(x<0&&y>0)
        printf("Second Quadrant");
    else if(x<0&&y<0)
        printf("Third Quadrant");
    else
        printf("Forth Quadrant");
}
