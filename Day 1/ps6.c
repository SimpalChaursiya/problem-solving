#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enter the side of the triangle:");
    scanf("%d%d%d",&a,&b,&c);
    if(a==b&&b==c&&a==c)
        printf("Equilateral triangle");
    else if(a==b||a==c||b==c)
        printf("Isosceles Triangle");
    else
        printf("Scalene Triangle");
}
